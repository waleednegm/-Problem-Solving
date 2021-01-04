// problem link https://codeforces.com/problemset/problem/946/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,input,b=0,c=0;
    cin >> n; 
    while(n>0){
        cin >> input;
        if(input>0){
            b+=input;
        }else {
            c+=input;
        }
        n--;
    }
    cout << b-c << endl;
    return 0;
}
