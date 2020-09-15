// problem link https://codeforces.com/contest/143/problem/A

#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int r1,r2,c1,c2,d1,d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int a,b,c,d;
    a=(c1+r1-d2)/2;
    b=r1-a;
    c=c1-a;
    d=d1-a;
    bool bb=true;
    if(a==b || a==c || a==d || b==c || b==d || c==d){
        b=false;
    }
    if((a>=1)&&(a<=9)&&(b>=1)&&(b<=9)&&(c>=1)&&(c<=9)&&(d>=1)&&(d<=9)&&(c==(r2-d))&&(d==(c2-b))&&(a==(d1-d)) && bb){
        cout << a << " " <<b << endl;
        cout << c << " " << d << endl;
    }else{
        cout << -1 << endl;
    }
}

