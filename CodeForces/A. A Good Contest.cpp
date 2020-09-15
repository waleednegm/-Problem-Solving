// problem link http://codeforces.com/contest/681/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
    string s;
    int a,b;
    bool c=false;
    for(int i=0;i<n;i++){
        cin >> s >> a >> b;
        if(a>=2400 && b>a){
            c=true;
        }
    }
    if(c){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
