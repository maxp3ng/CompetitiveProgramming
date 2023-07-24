// https://codeforces.com/contest/1853/problem/0
// unsolved
// comments: still learning how to make a cf template

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using db = long double;
using bl = bool;

#define endl "\n";

#define Loop(i,a,b) for(ll i=a; i<b; i++);
#define For(i,n) for(ll i=0; i<(ll)n; i++);



int main(){
    int T = 0;
    cin >> T;


    for (int k=0; k<T; k++){
//      cout << "---------| new test case |---------" << endl;
        ll N = 0;
        cin >> N;

        if (N == 1) {cout << 0 << endl; continue;}

        ll max = INT_MAX;
        ll prev;
        cin >> prev;
        bl works = true;

        for (int i=1; i<N; i++){
            ll in;
            cin >> in;
            if (in < prev) {cout << 0 << endl; works = false;}

            if (in-prev<max){
                max = in-prev;
            }
            prev = in;
        }
        if (works) { cout << (max - (max%2))/2 + 1 << endl; }
    }

    return 0;
}









