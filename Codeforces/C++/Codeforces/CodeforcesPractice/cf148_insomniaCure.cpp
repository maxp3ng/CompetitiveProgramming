// https://codeforces.com/problemset/problem/148/A
// solved 7/23/23
// comments: none

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MXN = 2e5 + 10;
using str = string;
using db = long double;
using vll = vector<ll>;
using pii = pair<int, int>;

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
    ll k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;

    ll count = 0;
    for (int i=1; i<=d; i++){
        if (i%k==0 || i%l==0 || i%m==0 || i%n==0){
           count++;
        }
    }
    Out(count) ;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --){
        solve();
//    }

    return 0;
}









