Q.15. Write a Program to Find a Leap Year or Not.?

#include <iostream>
using namespace std;

bool checkYear(int year)
{
    // leap year
    if (year % 400 == 0)
        return true;

    // Not leap year
    if (year % 100 == 0)
        return false;

    // leap year
    if (year % 4 == 0)
        return true;

    // Not leap year
    return false;
}

int main()
{

    int year = 2000;

    if (checkYear(year))
        cout << "Leap Year";
    else
        cout << "Not a Leap Year";

    return 0;
    
}