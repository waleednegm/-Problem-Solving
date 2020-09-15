// problem link https://codeforces.com/contest/339/problem/A

#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    priority_queue <char, vector<char>, greater<char>> c;
    string s;
    cin >> s;
    char ch[s.length()];
    for(int i=0;i<s.length();i++){
        c.push(s[i]);
    }
    int f=(s.length()-1)/2 ;
 
    for(int i=0;!c.empty();i++){
        ch[i]=c.top();
        c.pop();
    }
    for(int i=f;i<s.length()-1;i++){
        cout << ch[i]<< "+";
    }
    cout << ch[s.length()-1];
    return 0;
}
