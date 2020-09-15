// problem link https://codeforces.com/contest/682/problem/A

#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    long long n,m;
    cin >> n >> m;
    long long counter=0;
    int holder;
    for(long long i=1;i<=n;i++){
        holder = i%5;
        counter+=(holder+m)/5;
    }
    cout << counter << endl;
}
