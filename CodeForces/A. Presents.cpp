// problem link https://codeforces.com/contest/136/problem/A
#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        arr2[i]= arr[i];
    }
    sort(arr2,arr2+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(arr2[i]==arr[j]){
            cout << j+1 << " ";
        }
    }}
 
 
    return 0;
}
