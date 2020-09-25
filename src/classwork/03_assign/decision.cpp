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
    switch (grade) 
    {
        case 100:
        case 99:
        case 98:
        case 97:
        case 96:
        case 95:
        case 94:
        case 93:
        case 92:
        case 91:
        case 90:
            letter = "A";
            break;
        case 89:
        case 88:
        case 87:
        case 86:
        case 85:
        case 84:
        case 83:
        case 82:
        case 81:
        case 80:
            letter = "B";
            break;
        case 79:
        case 78:
        case 77:
        case 76:
        case 75:
        case 74:
        case 73:
        case 72:
        case 71:
        case 70:
            letter = "C";
            break;
        case 69:
        case 68:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
            letter = "D";
            break;
        default:
            letter = "F";
    }
    return letter;
}
