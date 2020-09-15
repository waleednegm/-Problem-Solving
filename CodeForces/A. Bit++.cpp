// problem link http://codeforces.com/contest/282/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int n;
    cin >> n;
    int x=0;
    string s;
    while(n>0){
        n--;
        cin >> s;
        if(s=="X++"){
            x++;
        }else if(s=="++X"){
            ++x;
        }else if(s=="X--"){
            x--;
        }else if(s=="--X"){
            --x;
        }
    }
    cout << x << endl;
    return 0;
}
