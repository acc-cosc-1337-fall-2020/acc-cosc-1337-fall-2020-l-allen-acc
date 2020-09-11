#include <string>
#include <iostream>

using std::string;

int main() 
{
	//Create string variable and display it	
	string name = "John Doe";
	std::cout << "Size 'name' is: " << name.size() << std::endl;
	std::cout << "Length 'name' is: " << name.length() << std::endl;	

	return 0;
}