// https://codeforces.com/contest/1850/problem/B
// solvec 7/21
// comments: could write faster

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int T = 0;
    cin >> T;

    for (int k=0; k<T; k++){
//      cout << "---------| new test case |---------" << endl;
        int N = 0;
        cin >> N;

        int max = INT_MIN;
        int maxIndex = 0;
        for (int i=0; i<N; i++){
            int words = 0;
            int quality = 0;

            cin >> words;
            cin >> quality;
            if (words <= 10 && quality > max){
               max = quality;
               maxIndex = i;
            }

        }
        cout << maxIndex + 1 << endl;
    }

    return 0;
}









