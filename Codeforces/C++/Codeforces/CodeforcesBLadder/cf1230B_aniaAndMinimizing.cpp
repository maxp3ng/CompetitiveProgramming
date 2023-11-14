// https://codeforces.com/problemset/problem/1230/B
// solved 11/9/23
// comments: solution works but runtime error on large numbers? why | JUST OUTPUT STRING GOD THIS WAS HORRENDOUS I HATE THIS WENSITE I HATE CODEOMP I

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

    cin >> n;
    cin >> m;
    cin >> s;


    if (m == 0){
        OutRet(s);
    }
    if (n == 1){
        OutRet(0);
    }
    if (s[0] != '1' && m > 0){
        s.replace(0,1,"1");
        m--;
    }

    for (ll i=1; i<n; i++) {
        if (s[i] == '0') { continue;}
        if(m>0){
            s.replace(i,1,"0");
            m--;
        }
    }

    OutRet(s.c_str());
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --){
    solve();
//    }

    return 0;
}