// problem link http://codeforces.com/contest/378/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int a,b;
    cin >> a >>b;
    int counter1=0,counter2=0,counter3=0;
    for(int i=1;i<=6;i++){
        if(abs(a-i)<abs(b-i)){
            counter1++;
        }else if(abs(a-i)>abs(b-i)){
            counter2++;
        }else{
            counter3++;
        }
    }
    cout << counter1 <<" " << counter3 << " " << counter2 << endl;
    return 0;
}
