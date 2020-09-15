// problem link http://codeforces.com/contest/262/problem/A#include <bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    long long n,k;
    string x;
    cin >> n >> k;
    int holder=0;
    int counter=0;
    for(int i=0;i<n;i++){
        cin >> x;
        for(int j=0;j<x.length();j++){
            if(x[j]=='4'||x[j]=='7'){
                holder++;
            }
        }
        if(holder<=k){
            counter++;
        }
        holder=0;
    }
    cout << counter << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    long long n,k;
    string x;
    cin >> n >> k;
    int holder=0;
    int counter=0;
    for(int i=0;i<n;i++){
        cin >> x;
        for(int j=0;j<x.length();j++){
            if(x[j]=='4'||x[j]=='7'){
                holder++;
            }
        }
        if(holder<=k){
            counter++;
        }
        holder=0;
    }
    cout << counter << endl;
    return 0;
}
