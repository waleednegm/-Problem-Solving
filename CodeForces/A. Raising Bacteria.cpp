// problem link https://codeforces.com/contest/579/problem/A

#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n;
    cin >> n;
    int counter=1;
    while(n/2!=0){
        if(n%2!=0){
            counter++;
        }
        n=n/2;
    }
    cout << counter << endl;
    return 0;
}
