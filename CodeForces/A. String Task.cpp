// problem link http://codeforces.com/contest/118/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
 
    string x,y;
    deque<char>s;
    cin >> x;
    for(int i=0;i<x.length();i++){
        x[i]=tolower(x[i]);
        if(x[i]=='a' || x[i]=='o' || x[i]=='y' || x[i]=='e' || x[i]=='u' || x[i]=='i' ){
        }else{
            s.push_front(x[i]);
        }
    }
    for(;!s.empty();){
        cout << '.';
        cout << s.back();
        s.pop_back();
    }
    cout << y << endl;
    return 0;
}
