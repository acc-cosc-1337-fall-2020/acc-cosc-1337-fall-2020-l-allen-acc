#include "vec.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;


int main() 
{
	vector<int> nums{10, 3, 2};

	std::cout << "Size of nums: " << nums.size() << "\n";
	cout << "Capacity of numsL: " << nums.capacity() << "\n";
	cout << "Max size of nums: " << nums.max_size() << "\n";
	nums.push_back(15);
	cout << "Capacity of nums: " << nums.capacity() << "\n";

	vector<int> nums2(10, 5);

	for(auto n: nums2)
	{
		cout << n << "\n";
	}

	return 0;
}