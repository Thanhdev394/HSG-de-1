#include <bits/stdc++.h>
using namespace std;
long long a , b , c;
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> a >> b >> c;
    cout << b / c - (a % c == 0 ? (a - 1) / c : a / c);
}
