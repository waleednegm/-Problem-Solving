// problem link https://codeforces.com/contest/228/problem/A
#include <bits/stdc++.h>
 
using namespace std;
int main() {
    int s[4];
    for(int i=0;i<4;i++){
        cin >> s[i];
    }
    sort(s,s+4);
    int arr[4]={1,1,1,1};
    for(int i=0;i<4;i++){
        if(s[i+1]==s[i]){
            arr[i]++;
        }
    }
    int holder=0;
    for(int i=0;i<4;i++){
       if(arr[i]>1){
        holder+=arr[i]-1;
       }
    }
    cout << holder << endl;
    return 0;
}
