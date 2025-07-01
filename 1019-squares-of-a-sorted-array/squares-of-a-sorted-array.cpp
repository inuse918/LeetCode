class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int N = nums.size();
        int left = 0, right = N - 1, pos = N - 1;
        vector<int> result(N);

        while (left <= right) { // 배열 길이가 홀수일 때 누락 방지를 위해 <=를 한다.
            if (abs(nums[left]) < abs(nums[right])) { //abs는 절대값 
                result[pos--] = nums[right] * nums[right];
                right--;
            }
            else {
                result[pos--] = nums[left] * nums[left];
                left++;
            }

        }
        return result;
    }
};