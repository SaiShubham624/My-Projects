#include<iostream>

using namespace std;

int main(){
    std::cout << "Yo Hello There C++" << std::endl;
    std::string Name;
    std::cout<< "Enter your Name:" << std::endl;
    std::getline(std::cin, Name);
    cout << "Okay So your Name is " << Name;
    return 0;
}