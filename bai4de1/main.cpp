#include <bits/stdc++.h>
using namespace std;
string s , str;
map<char , long long> cnt , d;
signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> s;
    for(int i = 0;i < s.size();i++){
        s[i] = toupper(s[i]);
        if(!d[s[i]]){
            str+=s[i];
            d[s[i]] = 1;
        }
        cnt[s[i]]++;
    }
    sort(str.begin() , str.end());
    for(auto i : str)
        cout << i << ' ' << cnt[i] << '\n';
}
