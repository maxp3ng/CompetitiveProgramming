// https://codeforces.com/problemset/problem/110/A
//  solved 7/25/23
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
#define OutRet(s)  cout << s << '\n'; return;

void solve(){
    ll n, m;
    str s;
    cin >> s;

    int nm = 0;
    for (int i=0; i<s.size(); i++){
        if (s[i] == '4' || s[i] == '7'){
            nm++;
        }
    }
    str nms = to_string(nm) ;
    int ret = 0;
    for (int i=0; i<nms.size(); i++){
        if (nms[i] == '4' || nms[i] == '7'){
            ret++;
        }
    }
    str re = (ret==nms.size())?"YES" : "NO";
    Out(re);
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --){
        solve();
//    }

    return 0;
}


/*
 * tomorrow and
 *              tomorrow and
 *                            tomorrow
 *
 * creeps in this petty pace from day to day
 *      to the last syllable of recorded time
 *          and all our yesterdays have lighted fools the way to dusty death
 *
 *          out, out, brief candle!
 */