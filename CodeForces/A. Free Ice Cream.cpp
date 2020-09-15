// problem link https://codeforces.com/contest/686/problem/A

 #include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long n,x;
    char s;
    long long b;
    cin >> n >> x;
    long long counter=0;
    long long holder=x;
    for(int i=0;i<n;i++){
        cin >> s >> b;
        if(s=='+'){
            holder+=b;
        }else{
        if(holder>=b){
            holder-=b;
        }else{
        counter++;
        }
        }
    }
    cout << holder << " " << counter << endl;
	return 0;
 
}
