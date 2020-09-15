// problem link http://codeforces.com/contest/22/problem/A#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bool b=false;
    sort(arr,arr+n);
    int holder=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]!=holder){
            cout << arr[i] << endl;
            return 0;
        }
        b=true;
    }
    if(b){
        cout << "NO" << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bool b=false;
    sort(arr,arr+n);
    int holder=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]!=holder){
            cout << arr[i] << endl;
            return 0;
        }
        b=true;
    }
    if(b){
        cout << "NO" << endl;
    }
    return 0;
}
