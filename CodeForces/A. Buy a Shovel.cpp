// problem link https://codeforces.com/contest/732/problem/A


#include <bits/stdc++.h>
 
using namespace std;
int k, r, h = 1, i = 0, j = 1;
int main() {
    cin >> k >> r;
    while (true) {
        i++;
        h = k * i;
        if (h % 10 == 0 || h % 10 == r) {
            break;
        }
    }
    cout << i;
}
