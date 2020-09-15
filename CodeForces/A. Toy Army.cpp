// problem link http://codeforces.com/contest/84/problem/A

#include <bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    int n,t;
    cin >> n;
    int counter=0;
    while(n>=2){
        n-=2;
        counter+=3;
    }
    cout << counter << endl;
    return 0;
}
