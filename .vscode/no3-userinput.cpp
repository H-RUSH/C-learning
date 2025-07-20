#include <iostream>
int main()
{
    std::string name;
     std::string fname;
    std::cout << "hellow brother what is your name" << '\n';
    std::cin >> name;
    std::cout << "hellow " << name << '\n';
   
    std::cout<<"what is your father name";
    std::getline(std::cin, fname);
    std::cout<<"hellow the fateer of my self "<<fname;

    return 0;
}