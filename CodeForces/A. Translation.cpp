// problem link http://codeforces.com/contest/41/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
 
    string x,t;
    cin >> x >> t;
    reverse(x.begin(),x.end());
    if(x==t){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
