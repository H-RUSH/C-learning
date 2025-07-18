#include<iostream>
namespace himadry{
    int x=10;
}
namespace himadry2{
    int x=15;
}
int main(){
    int x;
    std::cout<<"basi";
    x=himadry2::x+himadry::x;
    std::cout<<x;
}