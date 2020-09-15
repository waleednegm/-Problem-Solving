// problem link https://codeforces.com/contest/265/problem/A

#include <bits/stdc++.h>
 
using namespace std;
int main() {
    string s1,s2;
    cin >> s1 >> s2;
    int j=0;
    int holder=0;
    for(int i=0;i<s2.length();i++){
            if(s2[i]==s1[j]){
                holder++;
                j++;
            }
    }
    cout << holder+1 << endl;
    return 0;
}
