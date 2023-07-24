// https://codeforces.com/contest/1850/problem/0
// solved 7/21
// comments: order of operations

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int T = 0;
    cin >> T;

    for (int k=0; k<T; k++){
//      cout << "---------| new test case |---------" << endl;
        int a = 0, b = 0, c = 0;
        cin >> a;
        cin >> b;
        cin >> c;
        cout << ((a+b >= 10 || b+c >=10 || c+a >= 10) ? "YES" : "NO" )<< endl;

    }

    return 0;
}









