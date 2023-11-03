// https://codeforces.com/problemset/problem/1398/B
//  solved 7/30/23
// comments:

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
#define Out(s)  cout << s << '\n'
#define OutRet(s)  cout << s << '\n'; return
#define ts(n) to_string(n)

void solve(){
    ll n, m;
    str s = "";
    cin >> s;

    ll chain = 0;
    vll v;

    for (int i=0; i<s.size(); i++){
       if (s[i] == '1') {
           chain++;
       }
       else {
           if (chain > 0){
               v.pb(chain);
               chain = 0;
           }
       }
    }
    if (chain > 0) {
        v.pb(chain);
    }

//    vOut(v);
    int ret = 0;
    sort(v.begin(), v.end());
    for (int i=v.size()-1; i>=0; i-=2){
       ret += v[i] ;
    }
    cout << ret <<endl;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

    ll T = 1; cin >> T;
    while(T --){
        solve();
    }

    return 0;
}

