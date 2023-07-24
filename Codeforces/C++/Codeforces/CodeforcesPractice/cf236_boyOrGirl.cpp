// https://codeforces.com/problemset/problem/236/A
//  solved 7/23/23
// comments: getting used to template


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
//    ll N; cin >> N; Rep(i, 0, N)
    str s;
    cin >> s;
    vector<char> v;
    Rep(i,0,s.size()){
        bool seen = false;

        Rep(j,0,v.size()){
            if (s[i] == v[j]){seen = true; break;}
        }
        if (!seen) {
            v.pb(s[i]);
        }
    }

    Out((v.size()%2 == 0? "CHAT WITH HER!" : "IGNORE HIM!"));



}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --)
        solve();

    return 0;
}









