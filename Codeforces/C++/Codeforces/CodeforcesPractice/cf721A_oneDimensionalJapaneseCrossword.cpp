// https://codeforces.com/problemset/problem/721/A
// solved 10/28/23
// comments: good implementation, but could be better?

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
    str s;
    cin >> n >> s;
    ll ret = 0;
    str retString = "";
    ll chain = 0;
    char last = s[0];
    if (last == 'B'){ chain++;}
    for (int i=1; i<n; i++){
        char curr = s[i];
        if (curr == 'W' && last == 'B'){
           ret++;
           retString += to_string(chain) + " ";
           chain = 0;
        } else {
            if (curr == 'B'){
                chain++;
            }
        }
        last = curr;
    }
    if (last == 'B'){
        ret++;
        retString += to_string(chain) + " ";
    }

    Out(ret);
    if (retString.size() != 0) {
        Out(retString.substr(0, n));
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
