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

Example 1: If you enter 2000, the output will be "2000 is a leap year." because 2000 is divisible by 400.
Example 2: If you enter 1900, the output will be "1900 is not a leap year." because 1900 is divisible by 100 but not by 400.
Example 3: If you enter 2024, the output will be "2024 is a leap year." because 2024 is divisible by 4 but not by 100.