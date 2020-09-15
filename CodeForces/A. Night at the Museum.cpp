// problem link https://codeforces.com/contest/731/problem/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int holder=0;
    string s;
    cin >> s;
    s ='a'+s;
    int in=0;
    for(int i=1;i<s.length();i++){
 
        in = min(abs((s.at(i)-s.at(i-1))),26-abs(((s.at(i)-s.at(i-1)))));
        holder+=in;
 
    }
    cout << holder << endl;
    return 0;
}
