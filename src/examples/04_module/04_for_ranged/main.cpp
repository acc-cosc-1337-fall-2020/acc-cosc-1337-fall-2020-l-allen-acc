#include<string>
#include<iostream>
#include "for_ranged.h"

using std::string;	using std::cout;

int main() 
{
	char letter = 'a';


	string name = "John";
	string empty_string();
	string name1("copy constructor");
	string name2(name1, 3, 5);
	string name3("Another name", 10);
	string repeating();
	
	cout << name << std::endl;
	cout << empty_string << std::endl;
	cout << name1 << std::endl;
	cout << name2 << std::endl;
	cout << name3 << std::endl;
	cout << repeating << "\n\n";

	cout << "size of name is: " << name.size() << "\n";
	cout << "max size variable name can hold: " << name.max_size() << "\n";

	cout << "Capacity of name: " << name.capacity() << "\n";
	name.append(" doe");
	cout << "Capacity of name: " << name.capacity() << "\n";
	cout << name << "\n";

	
	std::size_t cnt = 0;
	while(cnt < name.size())
	{
		cout << name[cnt] << "\n";
		cnt++;
	}


	return 0;
}