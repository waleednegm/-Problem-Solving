// problem link https://codeforces.com/contest/294/problem/A

#include <bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    int n,m;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin >> m;
    int a,b;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        arr[a-2]+=b-1;
        arr[a]+=abs(arr[a-1]-b);
        arr[a-1]=0;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
    return 0;
}
