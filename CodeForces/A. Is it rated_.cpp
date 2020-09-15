// problem link https://codeforces.com/contest/807/problem/A

#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n;
    cin >> n;
    bool c=false;
    bool bb=false;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i]>> b[i];
 
    }
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            c=false;
            break;
        }else{
            c=true;
        }
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1]){
            bb=true;
        }else{
            bb=false;
            break;
        }
    }
    if(c==false){
        cout << "rated" << endl;
    }else if(c && bb==false){
        cout << "unrated" << endl;
    }else{
        cout << "maybe" << endl;
    }
 
 
    return 0;
}
