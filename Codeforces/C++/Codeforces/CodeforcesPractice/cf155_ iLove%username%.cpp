// https://codeforces.com/problemset/problem/155/A
// unsolved
// comments: spend less time debugging -> practice more

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
    ll n;
    cin >> n;
    int first ;
    cin >> first;
    int max = first;
    int min = first;

    int ret = 0;
    for (int i=1; i<n; i++){
        int in;
        cin >> in;

       if (in < min) { min = in; ret++; continue;}
        if (in > max) { max = in; ret++;}

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









