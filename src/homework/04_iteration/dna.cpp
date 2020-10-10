#include "dna.h"
#include <iostream>

using std::string;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const std::string& str)
{
    double count = 0.0;
    for (auto i : str)
    {
        if (i == 'G' || i == 'C')
        {
            count++;
        }
    }
    double result = count / str.size();

    return result;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(std::string str)
{
    string reverse = "";
    

    for (std::size_t i = str.size(); i >= 0; --i)
    {
        
        reverse += str[i];

    }
    
    return reverse;
}



/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
std::string get_dna_complement(std::string str)
{
    string replace = "";
    char letter;

    string reverse = get_reverse_string(str);

    for (auto i : reverse)
    {
        if (i == 'A') {letter = 'T';}
        else if (i == 'T') {letter = 'A';}
        else if (i == 'C') {letter = 'G';}
        else if (i == 'G') {letter = 'C';}
        replace += letter;
    }
    return replace;
}
