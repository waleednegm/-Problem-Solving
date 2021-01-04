// link https://codeforces.com/problemset/problem/1005/A
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int out[n],cnt=0;
    for(int i=0;i<n;i++){
        out[i]=1;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i+1]>arr[i]){
            out[cnt]=arr[i+1];
        }else{
            cnt++;
            
        }
    }
    cout << cnt+1 << endl;
    for (int i = 0; i < cnt+1; i++)
    {
        cout << out[i] << " ";
    }
    return 0;
}
