class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for (int i =0 ; i < arr.size(); i++){
            for (int j = 0; j < arr.size() ; j++) {
                if (i == j ) continue; // 또는  if(i != j && arr[i] == 2 * arr[j]) 
                if (arr[i] == arr[j] * 2) {
                    return true;
                }
            }
        }        
        return false;
    }
};