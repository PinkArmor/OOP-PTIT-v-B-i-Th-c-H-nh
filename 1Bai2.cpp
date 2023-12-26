#include <iostream>

int main()
{
	int n; std::cin>>n;
	std::cin.ignore();
	while(n--){
    int dem = 0;
    std::string st;
    while (std::getline(std::cin, st))
    {
        if (st == "")
        {
            std::cout << dem << std::endl;
            dem = 0;
        }
        else dem++;
    }
    std::cout << dem<<std::endl;
}
}
