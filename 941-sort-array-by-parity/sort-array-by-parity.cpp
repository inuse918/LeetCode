class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // 혼자 해본거 
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            while (left < right && nums[left] % 2 == 0) left++;
            while (left < right && nums[right] % 2 != 0) right--;
            if (left > right) break;
            swap(nums[left], nums[right]);
        }
        return nums; 
        
        // 솔루션 이해하기
        /*int left = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                swap(nums[left], nums[i]);
                left++;
            }
        }

        return nums;  */
    }
        
        
};