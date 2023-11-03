// https://codeforces.com/problemset/problem/34/A
// solved 10/15/23
// comments: abs(), to_string(), edgecases

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
    ll min = MXN-1;
    ll minIndex = 0;
    ll prev;
    cin >> prev;
    ll first ;
    first = prev;
    ll curr;
    for (int i=1; i<n; i++){
        cin >> curr;
        if (abs(curr-prev) < min){
            min = abs(curr-prev);
            minIndex = i;
        }
        prev = curr;
    }
    if (abs(first-curr) <= min){
        OutRet("1 " + to_string(n));
    }

    Out(to_string(minIndex) + " " + to_string(minIndex+1));
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --){
        solve();
//    }

    return 0;
}
