// https://codeforces.com/problemset/problem/228/A
//  solved 7/18/23
// comments: took a while to set up clion but got it

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<int> v{4, -1};
    int toBuy = 0;
    for (int i = 0; i < 4; i++) {
        int n = -1;
        cin >> n;
//        cout << n << " ---- " << endl;
        for (int j = i; j >= 0; j--) {
//            cout << i << " ----- " << j << endl;
            if (v[j] == n) {
//                cout << "hit " << endl;
                toBuy++;
                break;
            }
        }
        v[i] = n;
    }
    cout << toBuy << endl;

    return 0;
}









