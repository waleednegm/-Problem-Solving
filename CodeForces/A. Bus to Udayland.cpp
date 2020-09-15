// problem link http://codeforces.com/contest/711/problem/A#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
    string s[n];
    bool b=true;
    for(int i=0;i<n;i++){
        cin >> s[i];
        if(s[i][0]=='O' && s[i][1]=='O' && b){
            b=false;
        }else if(s[i][3]=='O' && s[i][4]=='O' && b){
            b=false;
            }
    }
    if(b==false){
        cout <<"YES" << endl;
    }else{
        cout <<"NO" << endl;
     }
    bool c=true;
    for(int i=0;i<n&&b==false;i++){
        if(s[i][0]=='O' && s[i][1]=='O' && c){
            c=false;
            cout << "++|"  << s[i][3] << s[i][4] << endl;
        }else if(s[i][3]=='O' && s[i][4]=='O' && c){
            c=false;
            cout << s[i][0] << s[i][1] << "|++"  << endl;
            }
        else{
            cout << s[i] << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n;
    cin >> n;
    string s[n];
    bool b=true;
    for(int i=0;i<n;i++){
        cin >> s[i];
        if(s[i][0]=='O' && s[i][1]=='O' && b){
            b=false;
        }else if(s[i][3]=='O' && s[i][4]=='O' && b){
            b=false;
            }
    }
    if(b==false){
        cout <<"YES" << endl;
    }else{
        cout <<"NO" << endl;
     }
    bool c=true;
    for(int i=0;i<n&&b==false;i++){
        if(s[i][0]=='O' && s[i][1]=='O' && c){
            c=false;
            cout << "++|"  << s[i][3] << s[i][4] << endl;
        }else if(s[i][3]=='O' && s[i][4]=='O' && c){
            c=false;
            cout << s[i][0] << s[i][1] << "|++"  << endl;
            }
        else{
            cout << s[i] << endl;
        }
    }
    return 0;
}
