// problem link https://codeforces.com/contest/43/problem/A

#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    string s[n];
    int holder=0;
    multiset<string>m;
    string winner;
    for(int i=0;i<n;i++){
        cin >> s[i];
        m.insert(s[i]);
    }
    for(int i=0;i<n;i++){
        if(holder<m.count(s[i])){
            holder=m.count(s[i]);
            winner = s[i];
        }
    }
    cout << winner << endl;
 
    return 0;
}
