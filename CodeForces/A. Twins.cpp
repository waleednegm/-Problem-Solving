// problem link https://codeforces.com/contest/160/problem/A

#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int counter=0;
    int sum =0;
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int sum2=0;
    for(int i=0;i<n;i++){
            if(sum>=sum2){
                sum2+=arr[i];
                sum-=arr[i];
                counter++;
            }else{
            break;
            }
    }
    cout << counter << endl;
    return 0;
}
