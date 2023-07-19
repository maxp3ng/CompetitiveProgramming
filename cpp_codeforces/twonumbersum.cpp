#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
    for (int i = 0; i < array.size(); i++){
        for (int j = 0; j < array.size(); j++){
            if (i != j){
                if (array[i] + array[j] == targetSum){
                    return {array[i], array[j]};
                }
            }
        }
    }
  
  
  return {};
}
