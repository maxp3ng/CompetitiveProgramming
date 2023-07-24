// https://codeforces.com/problemset/problem/141/A
//  solved 7/24/23
// comments: speed

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
#define vOut(v) Rep(i,0,v.size()){Out(v[i]);}
#define Out(s)  cout << s << '\n';

void solve(){
    ll n, m;
    str s1,s2,s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;

    s1 += s2;
    if (s1.size() != s3.size()){Out("NO"); return;}
    for (int i=0; i<s1.size(); i++){
        bool match = false;
        for (int j=0; j<s3.size(); j++) {
            if (s1[i] == s3[j]) {
                match = true;
                s3[j] = '.';
                break;
            }
        }
        if (!match){
            Out("NO");
            return;
        }
    }
    Out("YES");
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --){
        solve();
//    }

    return 0;
}









