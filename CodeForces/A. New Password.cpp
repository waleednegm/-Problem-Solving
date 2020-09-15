// problem link https://codeforces.com/contest/490/problem/A

#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,k;
    cin >> n >> k;
    multiset<char>m;
    for(char i='a';k>0;i++){
        m.insert(i);
        k--;
    }
    auto it = m.begin();
    while(n>0){
        for(char i='a';m.count(i)!=0&&n>0;it++){
        cout << *it;
        i++;
        n--;
    }
    it = m.begin();
    }
 
 
    return 0;
}
