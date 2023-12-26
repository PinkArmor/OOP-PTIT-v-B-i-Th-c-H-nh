#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    while (b)
    {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}
long long lcm(long long a, long long b)
{
    return a * b / gcd(a, b);
}
class PhanSo
{
private:
    long long tu, mau;

public:
    PhanSo()
    {
    }
    PhanSo(long long tu, long long mau)
    {
        this->mau = mau;
        this->tu = tu;
    }
    friend istream &operator>>(istream &in, PhanSo &a)
    {
        in >> a.tu >> a.mau;
        return in;
    }
    void rutgon()
    {
        long long k = gcd(tu, mau);
        tu /= k;
        mau /= k;
    }
     PhanSo operator+(PhanSo b)
    {
        PhanSo kq;
        long long d = lcm(this->mau, b.mau);
        kq.mau = d;
        kq.tu = this->tu * (d / this->mau) + b.tu * (d / b.mau);
        kq.rutgon();
        return kq;
    }
    friend ostream &operator<<(ostream &out, PhanSo a)
    {
        out << a.tu << "/" << a.mau;
        return out;
    }
};
int main()
{
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}
