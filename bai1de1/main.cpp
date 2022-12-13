#include <bits/stdc++.h>
using namespace std;
long long n;
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    n-=(n & 1 ? 2 : 1);
    cout << ((n - 1) / 2 + 1) * (n + 1) / 2;
}
