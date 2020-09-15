// problem link https://codeforces.com/contest/71/problem/A

 #include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    string s;
    cin >> n;
    while(n>0){
        n--;
        cin >> s;
        if(s.length()>10){
            cout << s[0]<< s.length()-2 <<s[s.length()-1] <<endl;
        }
        else{
            cout << s << endl;
        }
    }
	return 0;
 
}
