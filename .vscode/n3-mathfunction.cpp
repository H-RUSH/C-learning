#include <iostream>
#include<math.h>
int main()
{
    int a = 10;
    int b = 15;
    int a1 = std::max(a, b);
    int a2=std::min(a,b);
    double a3 = std::pow(a,b);
    std::cout << a1<<'\n';
    std::cout << a2<<'\n';
    std::cout << a3<<'\n';
}