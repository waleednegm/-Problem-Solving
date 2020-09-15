// problem link http://codeforces.com/contest/540/problem/A

#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int n;
    string s1,s2;
    cin >> n;
    cin >> s1 >> s2;
    int holder;
    int counter=0;
    for(int i=0;i<n;i++){
        holder=abs(s1[i]-s2[i]);
        if(holder>5){
                if(s1[i]<s2[i]){
                    s1[i]+=10;
                }else{
                    s2[i]+=10;
                }
        }
        holder=abs(s1[i]-s2[i]);
        counter+=holder;
    }
    cout << counter << endl;
	return 0;
}
