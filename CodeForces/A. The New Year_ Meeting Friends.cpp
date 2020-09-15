// problem link http://codeforces.com/contest/723/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int a,b,c,point1,point2,point3;
    cin >> a >> b >> c;
    point1 = abs(a-b)+abs(a-c);
    point2 = abs(b-a)+abs(b-c);
    point3 = abs(c-a)+abs(c-b);
    int min_ = min(point1,point2);
    int min_f = min(min_,point3);
    cout << min_f << endl;
    return 0;
}
