Q. Reverse Words in a String


119

33
Problem Statement: Given a string s, reverse the words of the string.

Examples:

Example 1:
Input: s=”this is an amazing program”
Output: “program amazing an is this”

Example 2:
Input: s=”This is decent”
Output: “decent is This”


class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int n = s.size(), i=0;

        while(i<n){
            string temp = "";
            while(s[i]==' ' && i<n)
            i++;
            while(s[i]!=' ' && i<n){
                temp +=  s[i];
                i++;
            }
            if(temp.size()>0){
                if(ans.size()==0)
                    ans = temp;
                else
                    ans = temp+" "+ans;
            }
        }
       return ans;
    }
};