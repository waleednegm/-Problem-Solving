// problem link https://codeforces.com/contest/707/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,m;
    char c;
    cin >> n >> m;
    bool b=false;
    for(int i=0;i<n*m;i++){
        cin >> c;
        if(c=='C' || c=='M' || c=='Y'){
            b=true;
            break;
        }
    }
    if(!b){
    cout << "#Black&White" <<endl;
    }else{
    cout << "#Color" <<endl;
    }
	return 0;
}
