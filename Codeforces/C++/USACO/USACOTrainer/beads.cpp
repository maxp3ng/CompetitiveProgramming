/*
ID: maxpeng1
TASK: beads
LANG: C++
unsolved
comments:
*/

#include <iostream>
#include <fstream>
#include <string>
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
#define vOut(v) Rep(i,0,v.size()){fout << v[i] << " ";} fout << endl
#define Out(s)  fout << s << '\n'
#define OutRet(s)  fout << s << '\n'; return;
#define ts(n) to_string(n)

int main() {
    ofstream fout ("./beads.out");
    ifstream fin ("beads.in");
    ll N;
    str s;
    cin >> N;
    cin >> s;

    char color1 = 'b';
    char color2 = 'r';
    //red then blue
    s = s+s;
    ll mx = 0;
    ll chain = 0;
    ll lastColorEnd = -1;
    bool firstColor = true;

    ll first = true;
    str temp = "";
    for (int i=0; i<N; i++){
        if (firstColor){
            if (s[i] == color1){
            } if (s[i] == 'w' && lastColorEnd != i-1 && !first){
                lastColorEnd = i;
            } else {
                firstColor = false;
            }
            chain++;
            temp+=s[i];
        } else { //secondColor
           if (s[i] == color2) {
               if(s[i-1] == color1){
                   lastColorEnd=i;
               }
               chain++;
               temp+=s[i];
           } else if (s[i] == 'w'){
               chain++;
               temp+=s[i];
           } else { // first color: tested segment done
               mx = max(chain, mx);
               swap(color1, color2);
               if (first) {
                   lastColorEnd = i-1;
                   first = false;
               }
               i = lastColorEnd;
               chain = 0;
               temp += '|';
           }
        }
   }

    cout << mx;
}