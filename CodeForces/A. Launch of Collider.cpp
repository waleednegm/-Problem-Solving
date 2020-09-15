// problem link https://codeforces.com/contest/699/problem/A


#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n;
    cin >> n;
    char arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    int holder=0;
    for(int i=0;i<n;i++){
        cin >> arr2[i];
        if(arr2[i]>holder){
            holder=arr2[i];
        }
    }
    int max_ = holder;
    for(int i=0;i<n;i+=2){
       if(arr1[i]=='R'&&arr1[i+1]=='L'){
        if(holder>abs((arr2[i]-arr2[i+1])/2)){
            holder=abs((arr2[i]-arr2[i+1])/2);
        }
       }
    }
    for(int i=1;i<n;i+=2){
       if(arr1[i]=='R'&&arr1[i+1]=='L'){
        if(holder>abs((arr2[i]-arr2[i+1])/2)){
            holder=abs((arr2[i]-arr2[i+1])/2);
        }
       }
    }
    if(holder<max_){
        cout << holder << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}
