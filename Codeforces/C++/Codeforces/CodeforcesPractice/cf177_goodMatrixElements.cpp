// https://codeforces.com/problemset/problem/177/A1
//  solved 7/23/23
// comments: speedrunning -> get a better app than ms.paint

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
    ll n, m;
    cin >> n;

    int sum = 0;
    Rep(i, 0, n){
        Rep(j,0,n){
            int in;
            cin >> in;
            if (i==j || i+j == n-1 || i == (n-1)/2 || j == (n-1)/2){
                sum += in;
            }
        }
    }
    Out(sum);



}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --){
        solve();
//    }

    return 0;
}









