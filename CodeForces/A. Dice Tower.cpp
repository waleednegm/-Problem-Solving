// problem link https://codeforces.com/contest/225/problem/A

#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    int n;
    cin >> n;
    int t,a,b;
    cin >> t;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if(a==t || a==7-t || b==t || b==7-t){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
