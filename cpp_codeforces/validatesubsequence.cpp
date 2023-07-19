using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
    int j = 0;
    for (int i = 0; i < array.size(); i++){
        if (array[i] == sequence[j]){
            j++;
            if (j == sequence.size()){
                return 1;
            }
        }
    }

  return 0;

}
