// problem link https://codeforces.com/contest/584/problem/A

#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n;
    string t;
    cin >> n >>t;
    if(n==1 && t=="10"){
        cout << -1;
    }
    else{
        int len_zero = n-(t.length());
        cout << t;
        for(int i=0;i<len_zero;i++){
        cout << 0;
    }
    }
    return 0;
 
}
