// problem link https://codeforces.com/contest/80/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin >> n >> m;
    int primes[15] ={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    bool b=false;
    for(int i=0;i<15;i++){
        if(primes[i]==n && primes[i+1]==m){
            b=true;
            break;
        }
    }
    if(b){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
