// problem link https://codeforces.com/contest/514/problem/A

#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    string num;
    cin >> num;
    int n;
    n=num[0]-48;
        if(9-n < n && 9-n>=1){
            cout << 9-n ;
        }else{
            cout << n ;
        }
    for(int i=1;i<num.length();i++){
        n=num[i]-48;
        if(9-n < n ){
            cout << 9-n ;
        }else{
            cout << n ;
        }
    }
}
