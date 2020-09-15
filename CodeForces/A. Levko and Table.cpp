// problem link http://codeforces.com/contest/361/problem/A

#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int n,k;
    cin >> n >> k;
    int arr[n][n];
    memset(arr,0,sizeof(arr));
    int h=0;
    for(int i=0;i<n;i++){
            arr[i][h]=k;
            h++;
    }
    //
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            cout << arr[i][j] <<" ";
    }
    cout << endl;
    }
	return 0;
}
