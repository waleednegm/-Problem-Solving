// problem link https://codeforces.com/contest/382/problem/A

#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    string s1,s2,f1="",f2="";
    cin >> s1 >> s2;
    int index=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='|'){
            break;
        }
        index++;
        f1+=s1[i];
    }
    for(int i=index+1;i<s1.length();i++){
        f2+=s1[i];
    }
 
 
    for(int i=0;i<s2.length();i++){
        if(f1.size()<=f2.size()){
                f1+=s2[i];
        }else{
                f2+=s2[i];
        }
    }
 
    if(f1.size()==f2.size()){
        cout << f1 << "|" << f2 << endl;
    }else{
        cout << "Impossible" << endl;
    }
    return 0;
}
