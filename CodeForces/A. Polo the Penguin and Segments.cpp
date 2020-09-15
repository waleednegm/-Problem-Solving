// problem link https://codeforces.com/contest/289/problem/A

#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n,k;
    cin >>n >> k;
    int a,b;
    int holder=0;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        holder+=(b-a)+1;
    }
    if(holder%k!=0){
        cout << k-holder%k << endl;
    }else{
        cout << 0 << endl;
    }
 
    return 0;
}
