// https://codeforces.com/problemset/problem/136/A
//  solved 7/24/23
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
#define vOut(v) Rep(i,0,v.size()){cout << v[i] << " ";} cout << endl;
#define Out(s)  cout << s << '\n';

void solve(){
    ll n, m;
    cin >> n;
    vi v(n,0);
    for (int i=0; i<n; i++){
        int in;
        cin >> in;
        v[i] = in;
    }
    vi ret(n,0);
    for (int i=0; i<n; i++){
        int nm = v[i];
        nm = v[nm-1];
        ret[nm-1] = v[i];
    }
   vOut(ret) ;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --){
        solve();
//    }

    return 0;
}









