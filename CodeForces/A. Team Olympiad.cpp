// problem link https://codeforces.com/contest/490/problem/A

#include <bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    int n;
    cin >> n;
    int counter;
    int arr[n];
    multiset<int>s;
    queue<int> a, b, c;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        s.insert(arr[i]);
        if(arr[i] == 1){
            a.push(i+1);
        }
        else if(arr[i] == 2){
            b.push(i+1);
        }
        else{
            c.push(i+1);
        }
    }
    counter=s.count(1);
    for(int i=2;i<=3;i++){
        if(s.count(i)<counter){
            counter=s.count(i);
        }
    }
    cout << counter << endl;
    while(counter--){
        cout<< a.front() << " "<< b.front() << " "<< c.front() <<endl;
        a.pop();
        b.pop();
        c.pop();
    }
    return 0;
}
