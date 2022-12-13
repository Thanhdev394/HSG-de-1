#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6 + 5;

vector<long long> v;
long long n , a[N] , t , sum[N];
bool check[N];
void sang(){
    check[0] = check[1] = 1;
    for(int i = 2;i <= sqrt(N);i++)
        if(!check[i])
            for(int j = i * i;j <= N;j+=i)
                check[j] = 1;
}
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> t >> n;
    for(int i = 1;i <= n;i++)
        cin >> a[i];
    sang();
    v.push_back(0);
    for(int i = 1;i <= n;i++)
        if(!check[a[i]])
            v.push_back(a[i]);
    for(int i = 1;i < v.size();i++)
        v[i] += v[i - 1];
    while(t--){
        long long k;
        cin >> k;
        long long x = v[lower_bound(v.begin() + 1, v.end() , k) - v.begin()];
        cout << (x >= k ? x : -1);
        cout << '\n';
    }
}
