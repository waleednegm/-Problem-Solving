// problem link https://codeforces.com/contest/296/problem/A


#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    multiset<int>s;
    set<int>ss;
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        s.insert(a[i]);
        ss.insert(a[i]);
    }
    int counter=0;
    bool b=false;
    for(auto i=ss.begin();i!=ss.end();i++){
        counter=s.count(*i);
        if(n>=2*counter-1){
            b=true;
        }else{
            b=false;
            break;
        }
    }
    if(b){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
