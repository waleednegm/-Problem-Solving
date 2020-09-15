// problem link https://codeforces.com/contest/486/problem/A

#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    long long int x;
    cin >> x;
    if(x%2 ==0){
        cout << x/2 << endl;
    }else{
        cout << -(x/2)-1 << endl;
    }
    return 0;
}
