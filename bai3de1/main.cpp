#include <bits/stdc++.h>
#define int long long
using namespace std;
const long long N = 1e6 + 5;
long long m , n , k , a[N] , sum[N];
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> m >> n >> k;
    for(int i = 1;i <= m;i++)
        cin >> a[i];
    sort(a + 1 , a + m + 1 , greater<long long>());
    for(int i = 1;i <= m;i++)
        sum[i] = sum[i - 1] + a[i];
    for(int i = 1;i <= m - n + 1;i++){
        if(a[i] - a[i + n - 1] <= k){
            cout <<  sum[i + n - 1] - sum[i - 1];
            return 0;
        }
    }
    cout << -2;
}

