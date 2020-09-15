// problem link https://codeforces.com/contest/785/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    int sum=0;
    string s;
    while(t>0){
        t--;
        cin >> s;
        if(s=="Tetrahedron"){
            sum+=4;
        }else if(s=="Cube"){
            sum+=6;
        }else if(s=="Octahedron"){
            sum+=8;
        }else if(s=="Dodecahedron"){
            sum+=12;
        }else if(s=="Icosahedron"){
            sum+=20;
        }
    }
    cout << sum << endl;
    return 0;
}
