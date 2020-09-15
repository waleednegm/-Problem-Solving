// problem link http://codeforces.com/contest/454/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int n;
    cin >> n;
    int holder=n/2;
    int holder2=1;
    int h= n/2;
    while(h+1>0){
        h--;
        for(int i=0;i<holder;i++){
            cout << '*';
        }
        for(int i=0;i<holder2;i++){
            cout << 'D';
        }
        for(int i=0;i<holder;i++){
            cout << '*';
        }
        cout << endl;
        holder2+=2;
        holder-=1;
    }
    h= n/2;
    holder=1;
    holder2=n-2;
    while(h>0){
        h--;
        for(int i=0;i<holder;i++){
            cout << '*';
        }
        for(int i=0;i<holder2;i++){
            cout << 'D';
        }
        for(int i=0;i<holder;i++){
            cout << '*';
        }
        cout << endl;
        holder2-=2;
        holder+=1;
    }
 
    return 0;
}
