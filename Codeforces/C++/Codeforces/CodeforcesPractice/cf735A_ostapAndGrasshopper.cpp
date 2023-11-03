// https://codeforces.com/problemset/problem/735/A
// solved 10/23/23
// comments: work on speed -> brute force worst solution

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
    cin >> n >> m;
    str s;
    cin >> s;
    for (int i=0; i<s.size(); i++){
        if (s[i] == 'G' || s[i] == 'T'){
            for (int j=i+m; j<n; j+=m){
                if (s[j] == '#'){
                    OutRet("NO");
                }
                else if (s[j] == 'G' || s[j] == 'T'){
                    OutRet("YES");
                }
            }
        }
    }
    OutRet("NO");

}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --){
        solve();
//    }

    return 0;
}
