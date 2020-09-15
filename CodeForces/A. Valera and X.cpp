// problem link https://codeforces.com/contest/404/problem/A


#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n;
    cin >> n;
    set<char>s;
    multiset<char>ss;
    string arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<arr[i].length();j++){
            s.insert(arr[i][j]);
            ss.insert(arr[i][j]);
        }
    }
    int hold=0;
    for(char a='a';a<='z';a++){
        hold+=s.count(a);
    }
    char holder = arr[0][0];
    bool b = true;
    for(int i=1;i<n;i++){
        if(holder==arr[i][i]){
            b=true;
        }else{
            b= false;
            break;
        }
    }
    int jj=0;
    for(int i=n-1;i>=0&&b;i--,jj++){
        if(holder==arr[jj][i]){
            b=true;
        }else{
            b= false;
            break;
        }
    }
    int hold2[2];
    if(b&&hold==2){
        hold2[0]=ss.count(arr[0][0]);
        for(char a='a';a<='z';a++){
        if(ss.count(a)>0 && a!= arr[0][0]){
             hold2[1]=ss.count(a);
        }
    }
    }
    if((b && hold==2 && hold2[0]==(2*n-1))&&hold2[1]==(n*n-(2*n-1))){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
 
}
