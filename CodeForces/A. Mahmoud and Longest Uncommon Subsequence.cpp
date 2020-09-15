// problem link https://codeforces.com/contest/766/problem/A

#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    int x= s1.length();
    int y= s2.length();
    if(x!=y){
        cout << max(x,y) <<endl;
    }else if(s1==s2){
    cout << -1 <<endl;
    }else{
    cout << x <<endl;
    }
    return 0;
}
