// problem link https://codeforces.com/contest/268/problem/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int a[n],h[n];
    int holder=0;
    for(int i=0;i<n;i++){
        cin >> h[i] >> a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(a[i]==h[j]){
            holder+=1;
        }
    }
    }
    cout << holder << endl;
    return 0;
}
