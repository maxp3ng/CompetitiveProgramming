// codeforces.com/contest/1875/problem/0
//  solved 9/30/23
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
    ll mx,v,n;
    cin >> mx  >> v >> n;
    if (v>mx){v=mx;}
    if (v == 0){OutRet(0);}

    vll a(n,0);
    for (int i=0; i<n; i++){
        ll t = 0;
        cin >> t;
        a[i] = t;
    }

    ll ret = v-1;
    v = 1;
    for (int i=0; i<n; i++){
        v += a[i];
        if (v > mx){ v = mx;}
        ret += v-1;
        v = 1;
    }
    ret++;
    Out(ret);
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

    ll T = 1; cin >> T;
    while(T --){
        solve();
    }

    return 0;
}
