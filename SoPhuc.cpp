#include <bits/stdc++.h>
using namespace std;
struct SoPhuc{
	long long thuc,ao;
};
	SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b){
		SoPhuc res;
		a.thuc += b.thuc;
		a.ao += b.ao;
		res.thuc=a.thuc*a.thuc-a.ao*a.ao;
		res.ao=2*a.thuc*a.ao;
		return res;
	}
	void hien_thi(SoPhuc a){
		cout<<a.thuc<<" + "<<a.ao<<"i";
	}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        SoPhuc A;
        SoPhuc B;
        cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
        SoPhuc C = binh_phuong_tong(A, B);
        hien_thi(C);
        cout << endl;
    }
}
