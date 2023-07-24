// https://codeforces.com/problemset/problem/1399/A
//  solved 7/23/23
// comments: none

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

    sort( v.begin(), v.end() );

    int first = v[0];
    for (int i=1; i<n; i++){
        if (v[i] - first > 1){
            Out("NO");
            return;
        }
        first = v[i];
    }

    Out("YES");
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

    ll T = 1; cin >> T;
    while(T --){
        solve();
    }

    return 0;
}









