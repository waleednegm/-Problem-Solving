// problem link https://codeforces.com/contest/709/problem/A

 #include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	long long n,b,d;
	cin >> n >> b >> d;
	long long a[n];
	long long sum=0;
	long long counter=0;
	for(int i=0;i<n;i++){
        cin >> a[i];
        if(b>=a[i]){
            sum +=a[i];
        }
        if(sum>d){
            counter++;
            sum=0;
	}}
	cout << counter << endl;
 
 
	return 0;
 
}
