// problem link http://codeforces.com/contest/672/problem/A

#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int n;
    cin >> n;
    int x=1;
    string s=to_string(x);
    while(s.length()<n){
        x++;
        s+=to_string(x);
    }
    cout << s[n-1] << endl;
	return 0;
}
