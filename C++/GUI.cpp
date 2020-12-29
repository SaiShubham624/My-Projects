#include <iostream>
#include <string>
using namespace std;

int main(){
    std::string name;
    std::cout << "Yo There I am learning GUI Making in C++" << std::endl;
    std::cout << "Enter your Name -> ";
    getline(cin, name);
    std::cout << "Your Name is " << name << endl;
    return 0;
}