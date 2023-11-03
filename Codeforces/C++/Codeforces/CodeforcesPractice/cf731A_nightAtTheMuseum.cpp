// https://codeforces.com/problemset/problem/731/A
// solved 10/28/23
// comments: think it through -> it's good to pause and look at the problem through a wider lens

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MXN = 2e5 + 10;
using str = string;
using db = long double;
using vll = vector<ll>;
using vi = vector<int>;
using pii = pair<int, int>;

#define endl "\n";
#define F first
#define S second
#define pb push_back
#define mp make_pair

#define Rep(i, x, y)   for (__typeof(x) i=x; i < y; i++)
#define Repi(i, x, y)  for (__typeof(x) i=x; i > y; i--)
#define vOut(v) Rep(i,0,v.size()){cout << v[i] << " ";} cout << endl
#define Out(s)  cout << (s) << '\n'
#define OutRet(s)  cout << (s) << '\n'; return
#define ts(n) to_string(n)

void solve(){
    ll n, m;
    str s;
    cin >> s;
    ll ret = 0;
    ll last = 0;
    for (int i=0; i<s.size(); i++){
       ll curr = s[i] - 'a';
        ll mn = min (last, curr);
        ll mx = max(last, curr);
        ret += min (abs(mx-mn), abs(26-mx+mn));
        last = curr;
    }
    Out(ret);
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --){
        solve();
//    }

    return 0;
}
