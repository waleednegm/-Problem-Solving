// problem link https://codeforces.com/contest/1/problem/A


#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long n,m,a;
    cin >> n >> m >> a;
    long long area = n*m;
    long long l = n/a;
    long long w = m/a;
    if(n%a != 0){
        l++;
    }
    if(m%a != 0){
        w++;
    }
    cout << l*w<< endl;
 
 
 
    return 0;
}
