// problem link http://codeforces.com/contest/53/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    string ss;
    string out="";
    int holder,holder2=101;
    for(int i=0;i<n;i++){
        cin >> ss;
        if(s.length()<=ss.length()){
            if(ss.find(s)==0 && (ss < out || out == "") ){
            out = ss;
        }
        }
    }
 
 
 
    if(out==""){
       cout << s << endl;
    }else{
       cout << out << endl;
    }
    return 0;
}
