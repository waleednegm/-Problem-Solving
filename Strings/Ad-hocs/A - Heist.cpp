// link https://codeforces.com/contest/1041/problem/A
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,max_num=0,min_num=LONG_MAX,a;
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if(a>max_num){
            max_num=a;
        }
        if(min_num>a){
            min_num=a;
        }
    }
    if(n==1){
        cout << 0 << endl;
    }else{
        cout << max_num-min_num-(n-1) << endl;
    }
    return 0;
}
