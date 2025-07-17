class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        int index = 0;
        
        for (int i = 0; i < nums.size() ; i++) {
            index = abs(nums[i]) - 1;
            nums[index] = abs(nums[index]) * (-1);
            cout << nums[index] << endl;
        }
        
        for (int i = 0 ; i < nums.size() ; i++) {
            if (nums[i] > 0) {
                result.push_back( i +1); //index +1 이 누락된 숫자임
            }
        }
        return result;
    }
};