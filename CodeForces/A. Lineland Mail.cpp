// problem link https://codeforces.com/contest/567/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
	 cin>>n;
	 int arr[n];
	 for(int i=0;i<n;i++){
		 cin>>arr[i];
	 }
	 long long min_ , max_;
	 for(int i=0;i<n;i++){
		 if(i==0){
            min_ =abs(arr[i]-arr[i+1]);
            max_ = abs(arr[i]-arr[n-1]);
		 }
		 else if(i==n-1){
            min_ =abs(arr[i]-arr[i-1]);
            max_ = abs(arr[i]-arr[0]);
		 }
		 else{
            min_ =min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]));
            max_ = max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
		 }
		 cout << min_ <<" " << max_ << endl;
	 }
    return 0;
}
