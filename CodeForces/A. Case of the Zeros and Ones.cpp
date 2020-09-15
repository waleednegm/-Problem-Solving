// problem link http://codeforces.com/contest/556/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int n;
    cin >> n;
    string s;
    cin >> s;
    multiset<char>m;
    for(int i=0;i<n;i++){
        m.insert(s[i]);
    }
    int x = m.count('0');
    int y = m.count('1');
    cout << abs(x-y) << endl;
    return 0;
}
