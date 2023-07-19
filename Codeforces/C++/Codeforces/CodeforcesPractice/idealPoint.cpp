// https://codeforces.com/problemset/problem/1795/B
// unsolved
// comments: so confused test case 9 in test set 2 is supposed to be yes this problem just doesn't make sense to me shm

#include <iostream>
#include <string> 
#include <vector>

using namespace std;
 

int main(){
	int T = 0;
	cin >> T;

	for (int i=0; i<T; i++){
			cout << "-----------------------------" << endl;
		int N = 0;
		cin >> N;
		int X = 0; 
		cin >> X;
		
		int frontStop = 0;
		int backStop = 0;
		bool yn = false;
		for (int j=0; j<N; j++){
			int lineStart = 0;
			cin >> lineStart;
			int lineEnd = 0;
			cin >> lineEnd;
			if (lineStart == X){frontStop = 1;}
			if (lineEnd == X){ backStop = 1;}
			//cout << frontStop << " " << backStop << " ---- " << X << endl;
			if(frontStop && backStop){ yn = true; break;}
		}
		if (yn) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << endl;
	}

    return 0;
}









