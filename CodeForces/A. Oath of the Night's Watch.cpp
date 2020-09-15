// problem link https://codeforces.com/contest/768/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int counter=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[0] && arr[i]<arr[n-1]){
            counter++;
        }
    }
    cout << counter << endl;
 
    return 0;
}
