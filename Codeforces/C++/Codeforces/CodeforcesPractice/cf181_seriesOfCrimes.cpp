// https://codeforces.com/problemset/problem/181/A
// solved 7/23/23
// comments: 2d vector + spaghetti but eh

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
//    ll N; cin >> N; Rep(i, 0, N)
    cin >> n >> m;
    vector<vector<int>> v(3, vector<int>(2,0));
    int stars = 0;

    Rep(i,0,n){
        str s;
        cin >> s;
        Rep(j,0,m){
            if (s[j] == '*'){
                v[stars][0] = i;
                v[stars][1] = j;
                stars++;
            }
        }
    }



    int xCoord = ((v[0][0] == v[1][0]) ? v[2][0] : (v[0][0] == v[2][0] ? v[1][0]:v[0][0]));
    int yCoord = ((v[0][1] == v[1][1]) ? v[2][1] : (v[0][1] == v[2][1] ? v[1][1]:v[0][1]));

    cout << xCoord + 1 << " " << yCoord  + 1 << endl;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

//    ll T = 1; cin >> T;
//    while(T --){
        solve();
//    }

    return 0;
}









