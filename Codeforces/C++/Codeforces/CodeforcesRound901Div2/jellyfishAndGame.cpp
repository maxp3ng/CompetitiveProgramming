// https://codeforces.com/contest/1875/problem/B
// unsolved
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
    ll n, m, k;
    cin >> n >> m >> k;

    vll a(n,0);
    vll b(m,0);

    ll mxa = -1*MXN;
    ll mna = MXN;
    ll mxb = -1*MXN;
    ll mnb = MXN;
    ll suma = 0;
    ll sumb = 0;
    for (int i=0; i<n; i++) {
        int t;
        cin >> t;
        a[i] = t;
        if (t > mxa) {mxa = t;}
        else if (t < mna) {mna = t;}
        else {suma += t;}
    }
    for (int i=0; i<m; i++) {
        int t;
        cin >> t;
        b[i] = t;
        if (t > mxb) {mxb = t;}
        if (t < mnb) {mnb = t;}
        else {sumb += t;}
    }

    if (mx)
    4 2
    3 1


}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

    ll T = 1; cin >> T;
    while(T --){
        solve();
    }

    return 0;
}

