// https://codeforces.com/problemset/problem/1214/B
// solved 11/11/23
// comments: think through on paper/mind! long solutions = you're doing something wrong

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MXN = 2e5 + 10;
using str = string;
using db = long double;
using vll = vector<ll>;
using vi = vector<int>;
using pii = pair<int, int>;

#define endl "\n";t
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
    ll b, g, n;
    cin >> b >> g >> n;

    b = min(b,n);
    g = min(g,n); // keeping in range (first test case)

    OutRet(b - (n-g) + 1);

    // test case 2:
//    0 1 2 3 4 5   blue is 5
//    5 4 3 2 1 0   red is 3 (which is acc index of 2)
// index 5 - index 2 +1 (for inclusive) is 4

}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --){
        solve();
//    }

    return 0;
}
