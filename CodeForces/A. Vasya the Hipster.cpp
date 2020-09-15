// problem link http://codeforces.com/contest/581/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int a,b;
    cin >> a >> b;
    int x = min(a,b);
    int y= (abs(a-b))/2;
    cout << x << " " << y << endl;
    return 0;
}
