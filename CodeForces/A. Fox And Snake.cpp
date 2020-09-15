// problem link http://codeforces.com/contest/510/problem/A#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int n,m;
    cin >> n >> m;
    int c=0;
    while(n>0){
        if(n>0){
            for(int i=0;i<m;i++){
            cout << "#";
            }
            n--;
            cout << endl;
        }
        if(n>0 &&c%2==0){
            for(int i=0;i<m-1;i++){
            cout << ".";
            }
            cout << "#" <<endl;
            c++;
            n--;
        }else if(n>0 &&c%2!=0){
            cout << "#" ;
            for(int i=0;i<m-1;i++){
            cout << ".";
            }
            cout <<endl;
            c++;
            n--;
        }}
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
 
    int n,m;
    cin >> n >> m;
    int c=0;
    while(n>0){
        if(n>0){
            for(int i=0;i<m;i++){
            cout << "#";
            }
            n--;
            cout << endl;
        }
        if(n>0 &&c%2==0){
            for(int i=0;i<m-1;i++){
            cout << ".";
            }
            cout << "#" <<endl;
            c++;
            n--;
        }else if(n>0 &&c%2!=0){
            cout << "#" ;
            for(int i=0;i<m-1;i++){
            cout << ".";
            }
            cout <<endl;
            c++;
            n--;
        }}
    return 0;
}
