/*
ID: maxpeng1
TASK: friday
LANG: C++
solved 9/24
comments: FINALLY
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
#define OutRet(s)  fout << s << '\n'; return
#define ts(n) to_string(n)

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    ll yearsLeft;
    fin >> yearsLeft;

    vll months{31,28,31,30,31,30,31,31,30,31,30,31};
    vll week(7,0);
    ll dayOfWeek = 2;
    ll year = 1900;

    while (yearsLeft > 0){
        if((year%4 == 0) && (year%100 != 0)) {
            months[1] = 29;
        } else if(year%400 == 0){
            months[1] = 29;
        } else {
            months[1] = 28;
        }
        for (ll month = 0; month < 12; month++){
            for (ll day=1; day<=months[month]; day++){
                if (day == 13){
                    week[dayOfWeek]++;
                }
                dayOfWeek++;
                if (dayOfWeek == 7){dayOfWeek = 0;}
            }
        }
        yearsLeft--;
        year++;
    }

    fout << week[0];
    for (ll i=1; i<7; i++){
        fout << " " << week[i];
    }
    fout << endl;
    return 0;
}