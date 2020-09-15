// problem link http://codeforces.com/contest/701/problem/A

#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    bool b[n];
    memset(b,true,sizeof(b));
    int holder=sum/(n/2);
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(b[i]==true && b[j]==true && (arr[i]+arr[j]==holder) && i!=j){
                b[i]=false;
                b[j]=false;
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
	return 0;
}
