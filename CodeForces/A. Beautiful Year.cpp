// problem link http://codeforces.com/contest/271/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string nn;
    cin >> nn;
    bool b=false;
    int n = stoi(nn)+1;
    for(int i=n;i<=10000;i++){
        b=false;
        nn=to_string(n);
        for(int j=0;j<4;j++){
            for(int d=j+1;d<4;d++){
                if(nn[j]==nn[d]){
                    b=true;
                }
            }
        }
        if(b){
            n++;
        }else{
            cout << n << endl;
            break;
        }
    }
    return 0;
}
