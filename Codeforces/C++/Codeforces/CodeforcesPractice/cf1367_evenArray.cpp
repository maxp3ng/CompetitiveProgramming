// https://codeforces.com/problemset/problem/1367/B
//  solved 7/30/23
// comments: read problem statement carefully

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
    ll n, m;
    cin >> n;

    int even = 0;
    int odd = 0;
    for (int i=0; i<n; i++){
        ll in;
        cin >>in;
        if(i%2==0 && in%2!=0){
           even++;
           continue;
        }
        if(i%2==1 && in%2!=1){
            odd++;
            continue;
        }
    }
    ll ret = (even == odd) ? (even) : -1;
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
