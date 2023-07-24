// https://codeforces.com/problemset/problem/146/A
// solved 7/23/23
// comments: ll has a limit too!

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MXN = 2e5 + 10;
using str = string;
using db = long double;
using vll = vector<ll>;
using pii = pair<int, int>;

#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair

#define Rep(i, x, y)   for (__typeof(x) i=x; i < y; i++)
#define Repi(i, x, y)  for (__typeof(x) i=x; i > y; i--)
#define vOut(v) Rep(i,0,v.size()){Out(v[i]);}
#define Out(s)  cout << s << '\n';

void solve(){
    ll n;
    str s;
    cin >> n;
    cin >> s;

    if (n%2!=0){
        Out("NO");
        return;
    }

    int sum = 0;
    for(int i=0; i<n/2; i++) {
       if (!(s[i] == '7' || s[i] == '4')){ Out("NO"); return;}
       sum += s[i] + 47;
    }
    for(int i=n/2; i<n; i++) {
        if (!(s[i] == '7' || s[i] == '4')){ Out("NO"); return;}
        sum -=  s[i] + 47;
    }
    str ret =  ((sum==0) ? ("YES") : ("NO"));
    cout << ret  << endl;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --){
        solve();
//    }

    return 0;
}









