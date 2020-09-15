// problem link https://codeforces.com/contest/318/problem/A

#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long n,k;
    cin >> n >> k;
    long long pos;
    if(k<=(n+1)/2){
        cout << 2*k -1 <<endl;
    }
    else{
            pos=k-(n+1)/2;
     cout << 2*pos <<endl;
    }
    return 0;
}
