// problem link http://codeforces.com/contest/659/problem/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int n,a,b;
	cin >> n >> a >> b;
    int s = a+b;
    while(s<0){
        s+=n;
    }
    while(s>n){
        s-=n;
    }
    if(s==0){
        cout << n << endl;
    }else{
    cout << s << endl;
    }
	return 0;
 
}
