// https://codeforces.com/problemset/problem/233/A
//  solved 7/23/23
// comments: read the problem statement closely -> spending 5 mins more reading is better than spending 15 rewriting

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
    ll N; cin >> N;
    if (N%2 == 1) { Out(-1); return; }
    cout << 2;
    Rep(i, 2, N+1){
        if (i%2==0){
            cout << " " << i-1;
        }
        else {
            cout << " " << i+1;
        }
    }
    cout << endl;


}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --){
        solve();
//    }

    return 0;
}









