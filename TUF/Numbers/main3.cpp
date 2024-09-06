//prime or not


//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int N){
        int count = 0;
        for(int i=2; i<=N; i++){
            if(N%i==0){
                count = count + 1;
            }
        }
        if(count==1){
            return 1;
        }
        else{
            return 0;
        }
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends


// optimal


bool checkPrime(int n){ 
    int cnt = 0;
    for(int i = 1; i <= sqrt(n); i++){ 
        if(n % i == 0){ 

            cnt = cnt + 1;

            if(n / i != i){
                cnt = cnt + 1;
            }
        }
    }
    if(cnt == 2){
        return true;
    }
    else{ 
        return false; 
    }
}
