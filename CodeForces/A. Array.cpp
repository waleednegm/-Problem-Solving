// problem link http://codeforces.com/contest/300/problem/A

#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    int n;
    cin >> n;
    vector<int>a,b,c;
    for(int i=0;i<n;i++){
        int d;
        cin >> d;
        if(d==0){
            c.push_back(d);
        }else if(d>0){
            b.push_back(d);
        }else{
            a.push_back(d);
        }
    }
 
        if (b.size() == 0) {
                for(int i = 0; i < 2; i++)
                      b.push_back(a.back()), a.pop_back();
        }
        if (a.size() % 2 == 0) {
                c.push_back(a.back());
                a.pop_back();
        }
 
        cout << a.size() <<" ";
        for(int i = 0; i < a.size(); i++) {
                cout << a[i] <<" ";
        }
        cout << endl;
        cout << b.size() <<" ";
        for(int i = 0; i < b.size(); i++) {
                cout << b[i] <<" ";
        }
        cout << endl;
        cout << c.size() <<" ";
        for(int i = 0; i < c.size(); i++) {
                cout << c[i] <<" ";
        }
        cout << endl;
 
 
    return 0;
}
