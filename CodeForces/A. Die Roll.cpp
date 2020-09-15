// problem link https://codeforces.com/contest/9/problem/A


#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int y,w;
    cin >> y >> w;
    int ma=max(y,w);
    string s[6]={"1/6","1/3","1/2","2/3","5/6","1/1"};
    if(ma==0){
        cout << 0 << "/"<< 1 << endl;
    }else{
        cout << s[abs(ma-6)] << endl;
 
    }
    return 0;
}
