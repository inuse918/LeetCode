class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxValue = -1, temp = 0;
        
        for (int i = arr.size()-1 ; i >= 0 ; i-- ) {
            /*if (arr[i]>maxValue) {
                temp = arr[i];
                arr[i] = maxValue;
                maxValue = temp;
            } else {
                arr[i] = maxValue;
            }*/
            
            temp = arr[i];
            arr[i] = maxValue;
            maxValue = max(maxValue, temp);
        }
        return arr ;
    }
};