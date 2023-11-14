// https://codeforces.com/problemset/problem/1374/B
// solved 7/3/23
// comments: solved > elegant solution

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
    

    ll two = 0;
    ll three = 0;

    while (n != 1){
      if (n < 1){
        Out("-1");
        return;
      }
      if (n%2 == 0){
        two++;
        n /= 2;
      } else if (n%3 == 0){
        three++;
        n /= 3;
      } else {
        Out("-1");
        return;
      }
    }

    if (two > three){
      Out("-1");
      return;
    }
    
    Out((three - two) + three);

}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

    ll T = 1; cin >> T;
    while(T --){
        solve();
    }

    return 0;
}

