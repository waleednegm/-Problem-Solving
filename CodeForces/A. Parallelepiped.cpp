// problem link http://codeforces.com/contest/224/problem/A

#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    int x,y,z;
	cin>>x>>y>>z;
	int a=sqrt((x*y)/z);
	int b=sqrt((x*z)/y);
	int c=sqrt((y*z)/x);
	
	cout<<(a+b+c)*4 << endl;;
	return 0;
}
