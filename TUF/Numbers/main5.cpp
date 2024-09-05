Check whether a number is Perfect Number or not.?



#include<iostream>
using namespace std;
 
// A function to check if n is palindrome

 
int main()
{
    int n,sum=0;
    cin>>n;
    if (n <= 0) {
        return false;  // Perfect numbers must be positive integers
    }
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum = sum+i;
        }
    }
    if(sum==n){
        cout<<"perfect number";
    }else{
        cout<<"not perfect number";
    }
    
    return 0;
}

Example 1:
Input: n=6
Output: 6 is a perfect number

Example 2:
Input: n=15
Output: 15 is not a perfect number

Example 3:
Input: n=28
Output: 28 is a perfect number
Reason:
For 6 and 28 , the sum of their proper divisors (1+2+3) and (1+4+7+14) is equal to the respective numbers and for 15 it is not.