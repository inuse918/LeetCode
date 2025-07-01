class Solution {
public:
    int findNumbers(vector<int>& nums) {
        unsigned int res = 0;
        for(int num : nums){
            unsigned int cnt = 0;
            while(num >= 1){
                num = num / 10;
                cnt += 1;
            }
            if(cnt % 2 == 0){
                res += 1;
            }
        }
        return res;
    }
};