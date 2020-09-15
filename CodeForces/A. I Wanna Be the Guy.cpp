// problem link https://codeforces.com/contest/469/problem/A


#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,p,q;
    cin >> n ;
    cin >> p;
    int arr[210];
    for(int i=0;i<p;i++){
        cin >> arr[i];
    }
    cin >> q;
    for(int i=p;i<q+p;i++){
        cin >> arr[i];
    }
    sort(arr,arr+(p+q));
    int counter=0;
    for(int i=0;i<p+q;i++){
        if(arr[i]!=arr[i+1]){
            counter++;
 
        }
    }
    if(counter==n){
        cout << "I become the guy." << endl;
    }
    else{
    cout << "Oh, my keyboard!" << endl;
    }
 
    return 0;
}
