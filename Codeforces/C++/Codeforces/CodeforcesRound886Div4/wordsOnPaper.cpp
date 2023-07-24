// https://codeforces.com/contest/1850/my
//  solved 7/21
// comments: ' vs "

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int T = 0;
    cin >> T;

    for (int k=0; k<T; k++){
//      cout << "---------| new test case |---------" << endl;
        string s = "";
        for (int i=0; i<8; i++){
            string row;
            cin >> row;

            for (int j=0; j<8; j++){
                if (row[j] != '.'){s += row[j];}
            }
        }
        cout << s << endl;
    }

    return 0;
}









