// https://codeforces.com/problemset/problem/749/A
// solved 10/22/23
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
#define Out(s)  cout << (s) << '\n'
#define OutRet(s)  cout << (s) << '\n'; return
#define ts(n) to_string(n)

void solve(){
    ll n, m;
    cin >> n;
    if (n%2 == 0){
        str ret = "2";
        for (int i=1; i<n/2; i++){
            ret += " 2";
        }
        Out((n)/2);
        OutRet(ret);
    }
    else{
        if (n==3) {
            Out("1");
            OutRet(n);
        }

        n -= 3;
        str ret = "2";
        for (int i=1; i<n/2; i++){
            ret += " 2";
        }
        ret += " 3";
        Out((n+2)/2);
        OutRet(ret);

    }

}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --){
        solve();
//    }

    return 0;
}
