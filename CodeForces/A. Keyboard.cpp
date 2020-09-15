// problem link https://codeforces.com/contest/474/problem/A


#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s = "qwertyuiop[]asdfghjkl;'zxcvbnm,./qwertyuiop[]asdfghjkl;'zxcvbnm,./qwertyuiop[]asdfghjkl;'zxcvbnm,./qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    string d,ss;
    cin >> d >> ss;
    if(d=="R"){
       for(int i=0;i<ss.length();i++){
       for(int j=0;i<s.length();j++){
        if(ss[i]==s[j]){
            cout << s[j-1];
            break;
        }
    }
    }
    }else{
    for(int i=0;i<ss.length();i++){
       for(int j=0;i<s.length();j++){
        if(ss[i]==s[j]){
            cout << s[j+1];
            break;
        }
    }
    }
    }
 
 
 
    return 0;
}
