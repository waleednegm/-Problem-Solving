// problem link http://codeforces.com/contest/158/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int n,k;
    cin >> n >>k;
    int arr[n];
    int counter=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
