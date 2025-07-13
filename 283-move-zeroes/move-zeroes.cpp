class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // 방법 1
        // 0이 아닌 원소를 배열의 앞부분에 저장 후 ptr 부터 배열 끝까지 0으로 채움 
        /* int ptr = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[ptr] = nums[i];
                ptr++;
            }
        }
        for (int i = ptr; i < nums.size(); i++) {
            nums[i] = 0;
        }  */

        // 방법 2
        int ptr = 0;
        int temp = 0;
        if ( nums.size() == 1 ) return ;
        for (int i = 0; i <nums.size(); i++){
            if (nums[i]!=0) {
                temp = nums[i];
                nums[i] = 0;
                nums[ptr++] = temp;
            }
        }
        
    }
};