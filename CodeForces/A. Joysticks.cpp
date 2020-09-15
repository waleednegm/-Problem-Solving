// problem link http://codeforces.com/contest/651/problem/A

#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    int a,b;
    cin >> a >> b;
    int counter=0;
    if(a==1 && b==1){
    cout << counter << endl;
    return 0;
    }
    while(a >0 && b >0){
        if(a<=b){
           a++;
           b-=2;
           counter++;
        }else{
            a-=2;
            b++;
            counter++;
        }
    }
    cout << counter << endl;
 
    return 0;
}
