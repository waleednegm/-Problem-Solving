// problem link http://codeforces.com/contest/617/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int n;
    cin >> n;
    int counter=0;
    while(n>=5){
        n-=5;
        counter++;
    }
    if(n>0){
        counter++;
    }
    cout << counter << endl;
    return 0;
}
