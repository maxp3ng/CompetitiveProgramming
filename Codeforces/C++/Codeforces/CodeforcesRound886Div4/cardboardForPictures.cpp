// https://codeforces.com/contest/1850/problem/E
// unsolved
// comments: use BigInt next time

#include <iostream>
#include <string>
#include <vector>
#include <math.h>


using namespace std;

int main(){
    int T = 0;
    cin >> T;

    for (int k=0; k<T; k++){
      cout << "---------| new test case |---------" << endl;
        long long N = 0;
        long long C = 0; // squares used
        cin >> N;
        cin >> C;
        long long perimeter = 0;
        for (long long i=0; i<N; i++){
            int boxLength = 0;
            cin >> boxLength;
            perimeter += boxLength;
            C -= pow(boxLength,2);
        }
        perimeter *= 4;
        long long a = 4*N;
        long long b = perimeter;
        long long c = -1 * C;

        long long root1 = (-1 * b + pow(b*b - 4*a*c, 0.5))/(2*a);
        long long root2 = (-1 * b - pow(b*b - 4*a*c, 0.5))/(2*a);

        cout << a << " " << b << " " << c << " abc " << endl;
        cout << root1 << " " << root2 << "root1root2" << endl;
        cout << ((root1 >= 0) ? root1:root2) << endl;
    }

//    36
//                (4w^2 * 3) + (3w + 2w + 1w) * 4
//                12w^2 + 24w
    return 0;
}









