// problem link http://codeforces.com/contest/75/problem/A

#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    deque<char>d1;
    deque<char>d2;
    deque<char>d3;
    string a,b;
    cin >> a >> b;
    int sum =stoi(a)+stoi(b);
    string sum3= to_string(sum);
    int len1=0,len2=0,len3=0;
    for(int i=0;i<a.length();i++){
        if(a[i]!='0'){
            d1.push_back(a[i]);
            len1++;
        }
    }
    for(int i=0;i<b.length();i++){
        if(b[i]!='0'){
            d2.push_back(b[i]);
            len2++;
        }
    }
    for(int i=0;i<sum3.length();i++){
        if(sum3[i]!='0'){
            d3.push_back(sum3[i]);
            len3++;
        }
    }
    char a_nozero[len1],b_nozero[len2],s_nozero[len3];
    for(int i=0;i<len1;i++){
        a_nozero[i]=d1.front();
        d1.pop_front();
    }
    for(int i=0;i<len2;i++){
        b_nozero[i]=d2.front();
        d2.pop_front();
    }
    for(int i=0;i<len3;i++){
        s_nozero[i]=d3.front();
        d3.pop_front();
    }
    int sum2 = stoi(a_nozero)+stoi(b_nozero);
    int sum4 = stoi(s_nozero);
    if(sum2==sum4){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
 
    return 0;
}
