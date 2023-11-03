// https://codeforces.com/problemset/problem/723/A
// solved 10/28/23
// comments: think then brute force

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
    ll a, b, c;
    cin >> a >> b >> c;
    ll mid = 0;
    if (a < b )  {
        if ( b < c){
            mid = b;
        }
        else {
            if ( c < a){ mid = a;}
            else {mid = c;}
        }
    } else {
        if (a > c){
            if (c > b){
                mid = c;
            }
            else {mid = b;}
        } else {
            mid = a;
        }
    }
    ll ret = 0;
    ret += abs(mid - a);
    ret += abs(mid - b);
    ret += abs(mid - c);
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
