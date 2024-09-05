//armstrong number


#include<iostream>
using namespace std;
 
// A function to check if n is palindrome

 
int main()
{
    int n,arm=0,rem,c;
    cin>>n;
    c=n;
    
    while(n>0){
        rem=n%10;
        arm=(rem*rem*rem)+arm;
        n=n/10;
    }
    if(c==arm){
        cout<<"arm0";
    }else{
        cout<<"not";
    }
    
    return 0;
}
