// problem link http://codeforces.com/contest/255/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int n;
    cin >> n;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    int chest=0,biceps=0,back_=0;
    for(int i=0;i<n;i+=3){
        chest+=x[i];
    }
    for(int i=1;i<n;i+=3){
        biceps+=x[i];
    }
    for(int i=2;i<n;i+=3){
        back_+=x[i];
    }
    if(chest>biceps && chest > back_){
        cout << "chest"  << endl;
    }else if(biceps>chest && biceps > back_){
        cout <<  "biceps" << endl;
    }else{
        cout << "back" << endl;
    }
    return 0;
}
