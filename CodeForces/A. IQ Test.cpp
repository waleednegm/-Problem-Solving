// problem link https://codeforces.com/contest/287/problem/A

#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    char s[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> s[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           if(s[i][j]=='#'&&s[i][j+1]=='#'){
            if(s[i+1][j]=='#'||s[i+1][j+1]=='#'){
                cout << "YES" << endl;
                return 0;
            }
           }
        }
    }
    for(int i=3;i>0;i--){
        for(int j=3;j>0;j--){
           if(s[i][j]=='#'&&s[i][j-1]=='#'){
            if(s[i-1][j]=='#'||s[i-1][j-1]=='#'){
                cout << "YES" << endl;
                return 0;
            }
           }
        }
    }
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           if(s[i][j]=='.'&&s[i][j+1]=='.'){
            if(s[i+1][j]=='.'||s[i+1][j+1]=='.'){
                cout << "YES" << endl;
                return 0;
            }
           }
        }
    }
    for(int i=3;i>0;i--){
        for(int j=3;j>0;j--){
           if(s[i][j]=='.'&&s[i][j-1]=='.'){
            if(s[i-1][j]=='.'||s[i-1][j-1]=='.'){
                cout << "YES" << endl;
                return 0;
            }
           }
        }
    }
    cout << "NO" << endl;
    return 0;
}
