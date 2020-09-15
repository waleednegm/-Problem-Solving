// problem link https://codeforces.com/contest/365/problem/A

#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n;
    char k;
    cin >> n >> k;
    string a;
    set<char>s;
    int sum=0;
    while(n>0){
        bool b=true;
        n--;
        cin >> a;
        for(int i=0;i<a.length();i++){
            s.insert(a[i]);
        }
        for(char i='0';i<=k;i++){
            if(s.count(i)==0){
                b=false;
                break;
            }
        }
        if(b){
            sum++;
        }
        s.clear();
    }
    cout << sum << endl;
    return 0;
}
