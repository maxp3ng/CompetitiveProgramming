//
// unsolved
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
#define Out(s)  cout << s << '\n'
#define OutRet(s)  cout << s << '\n'; return
#define ts(n) to_string(n)

void solve(){
    ll n;
    cin >> n;
    n--;

//    okay first things on solving 0-n you have to figure out highest digit's place
//    logbase9 of n ceil gives you the highest digit's place
    int highestPlace = ceil(log(n)/log10);

    int sum = 0;
    for (i = highestPlace; i>0; i--){
        sum += (9^i);
    }

    Out(n-sum);
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

    ll T = 1; cin >> T;
    while(T --){
        solve();
    }

    return 0;
}