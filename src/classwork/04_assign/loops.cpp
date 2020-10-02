//cpp
#include <iostream>

/* Factorial takes a numer (starting at 1), multiplies itself by the next number incrementing order
   all the way to the target number */

int factorial(int num)
{
    int answer = 1;     //  Initialize the answer
    for(int x=1; x<=num; x++)       //  Loop until the number that increments reaches the target number
    {
        answer = answer * x;        //  Multiply the incrementing number to the answer
    } 
    return answer;          //  Return answer
}