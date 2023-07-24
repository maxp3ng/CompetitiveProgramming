// https://codeforces.com/problemset/problem/214/A
//  solved 7/23/23
// comments: for squaring just multiply by itself -> also FIRST TIME 5 MIN COMPLETION NO ERRORS!!!! IT FINALLY HAPPENS

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MXN = 2e5 + 10;
using str = string;
using db = long double;
using vll = vector<ll>;
using pi = pair<int, int>;

#define endl "\n";
#define F first
#define S second
#define pb push_back
#define mp make_pair

#define Rep(i, x, y)   for (__typeof(x) i=x; i < y; i++)
#define Repi(i, x, y)  for (__typeof(x) i=x; i > y; i--)
#define vOut(v) Rep(i,0,v.size()){Out(v[i]);}
#define Out(s)  cout << s << '\n';

void solve(){
    ll n, m;
//    ll N; cin >> N; Rep(i, 0, N)
    cin >> n >> m;
    ll ret = 0;
    Rep(i,0,101){
        Rep(j,0,101){
           if (i*i+j == n && i+j*j == m){ ret++;}
        }
    }
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









