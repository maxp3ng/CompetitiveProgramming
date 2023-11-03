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
    ofstream fout ("beads.out");
    ifstream fin ("beads.in");
    ll N;
    str s;
    fin >> N;
    fin >> s;

    s = s+s;
    ll ret = 0;
    ll lastWhiteStart, chain, lastChain;
    lastWhiteStart = chain = lastChain = 0;
    char lastChar = 'X';

    for (int i = 0; i<N*2; i++){
        char curr = s[i];
        if (curr == 'X'){

        } else if (curr == 'w'){

        }
    }



    Out(ret);

}