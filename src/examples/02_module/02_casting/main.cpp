#include <iostream>
#include "casting.h"

using std::cout;    using std::cin;

int main()
{
    double num;

    cout << "Enter a double: ";
    cin >> num;

    cout << "Your number is now: " << convert_double_to_int(num) << std::endl;

    return 0;
}