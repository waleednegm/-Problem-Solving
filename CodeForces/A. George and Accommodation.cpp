// problem link http://codeforces.com/contest/467/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int n,a,b;
    cin >> n;
    int counter=0;
    while(n>0){
        n--;
        cin >> a >> b;
        if(b-a>=2){
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
