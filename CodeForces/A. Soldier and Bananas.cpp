// problem link http://codeforces.com/contest/546/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int k,n,w;
    cin >> k >> n >> w;
    int all=0;
    int holder=1;
    while(w>0){
        w--;
        all+=holder*k;
        holder++;
    }
    if(n-all <0){
        cout << abs(n-all) << endl;
    }else{
        cout << "0" << endl;
    }
    return 0;
}
