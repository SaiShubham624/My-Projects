#include <iostream>
using std::getline;
int main(){
	std::cout << "Hi This is my First C++ Program in Vim" << std::endl;
	std::cout << "Enter your Name: ";
	std::string Name;
	getline(std::cin, Name);
	std::cout << "Ok So your Name is " << Name << std::endl;
	return 0;
}
