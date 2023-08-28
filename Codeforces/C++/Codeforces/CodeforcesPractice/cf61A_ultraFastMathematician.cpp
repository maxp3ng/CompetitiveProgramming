// https://codeforces.com/problemset/problem/61/A
// unsolved
// comments: xor? learn binary ops

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
    str s1, s2;
    cin >> s1 >> s2;
    str ret;
  for (int i=0; i< s1.size(); i++){
    ret += (s1[i] != s2[i]) ? "1":"0";
  }
  cout << ret << endl;;

}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

    //ll T = 1; cin >> T;
    //while(T --){
        solve();
    //}

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
