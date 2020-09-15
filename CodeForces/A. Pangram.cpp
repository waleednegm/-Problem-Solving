// problem link https://codeforces.com/contest/520/problem/A

#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<int>ss;
    int counter=0;
    if(n<26){
        cout << "NO" << endl;
    }
    else{
        for(int i=0;i<n;i++){
         s[i]=tolower(s[i]);
         ss.insert(s[i]);
        }
        for(char i='a';i<='z';i++){
         int j=ss.count(i);
         if(j==1){
            counter+=j;
         }
        }
        if(counter==26){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
