// problem link http://codeforces.com/contest/950/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int l,r,a,counter=0;
    cin >> l >> r >> a;
    while(a>0){
        if(l<r){
            l++;
            a--;
        }else{
            r++;
            a--;
        }
    }
    int min_n = min(r,l);
    cout << 2*min_n << endl;
    return 0;
}
