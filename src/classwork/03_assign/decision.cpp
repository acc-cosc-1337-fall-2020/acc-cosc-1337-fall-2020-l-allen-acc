//cpp
#include <iostream>

using std::string;  using std::cout;

string get_letter_grade_using_if(int grade)
{
    if (grade > 89)
    {
        return "A";
    }
    else if (grade > 79)
    {
        return "B";
    }
    else if (grade > 69)
    {
        return "C";
    }
    else if (grade > 59)
    {
        return "D";
    }
    else
    {
        return "F";
    }
}

string get_letter_grade_using_switch(int grade)
{
    string letter;
    switch (grade/10) 
    {
        case 10:
        case 9:
            letter = "A";
            break;
        case 8:
            letter = "B";
            break;
        case 7:
            letter = "C";
            break;
        case 6:
            letter = "D";
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            letter = "F";
            break;
        default:
            letter = "Invalid Grade";
    }
    return letter;
}
