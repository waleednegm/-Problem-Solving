// problem link https://codeforces.com/contest/298/problem/A

#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n;
    cin >> n;
    char arr[n];
    int h1,h2;
    for(int i=0;i<n;i++){
        cin >> arr[i];
 
    }
    for(int i=0;i<n;i++){
        if(arr[i]=='R'){
            h1=i;
            break;
        }else if(arr[i]=='L'){
            h1=i;
            break;
        }
 
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]=='R'){
            h2=i;
            break;
        }else if(arr[i]=='L'){
            h2=i;
            break;
        }
 
    }
 
    if(arr[h1]=='R'&&arr[h2]=='R'){
        cout << h1+1 <<" " << h2+2 << endl;
    }else if(arr[h1]=='L'&&arr[h2]=='L'){
        cout << h2+1 <<" " << h1 << endl;
    }else if(arr[h1]=='R'&&arr[h2]=='L'){
        for(int i=0;i<n;i++){
            if(arr[i]=='L'){
                h2=i;
                cout << h1+1 << " " << h2 << endl;
                break;
            }
        }
    }
    return 0;
}
