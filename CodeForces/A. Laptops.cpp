// problem link http://codeforces.com/contest/456/problem/A

#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int holder=0;
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
        if(a[i]<b[i]){
        holder++;
        break;
    }
}
if(holder>0){
    cout << "Happy Alex" << endl;
}
else{
    cout << "Poor Alex" << endl;
}
return 0;
}
