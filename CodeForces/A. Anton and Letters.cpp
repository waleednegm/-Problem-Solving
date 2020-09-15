// problem link https://codeforces.com/contest/443/problem/A

 #include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int counter=0;
    set<char>ss;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        ss.insert(s[i]);
    }
    for(char i='a';i<='z';i++){
        counter+=ss.count(i);
    }
        cout << counter << endl;
 
 
	return 0;
 
}
