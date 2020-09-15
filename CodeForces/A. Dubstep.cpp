// problem link https://codeforces.com/contest/208/problem/A

#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    string s;
    cin >> s;
    string s1 = "WUB";
    while(s.find(s1)==0){
        s.erase(0,3);
    }
    int len = s.length();
    for(int i=0;i<len;i++){
            if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
                cout << " " ;
                i+=2;
            }else{
                cout << s[i];
            }
    }
    cout << endl;
    return 0;
}
