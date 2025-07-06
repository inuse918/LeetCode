class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ptr = 0; // ptr 은 중복 안된 고유 값 나왔을 때 이동될 nums index

        for (int i = 1 ; i< nums.size(); i++){
            /* [0,0,1,1,1,2,2,3,3,4] 에서
               nums[0] != nums[2] :
                nums [1] = nums[2] -> 1번 index에 nums[2] = 1 대입
            */
            if (nums[ptr] != nums[i]){  
                nums [++ptr] = nums[i];
            }
        }
        return ptr+1; // index 번호이므로 +1 return
    }
};