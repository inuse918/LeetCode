class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // O (n log n) -> sort 사용과정에서 발생 , 공간복잡도 O(1)
        // easy
        /*
        sort(nums.begin(), nums.end(), greater<int>());
        int rank = 1;
        int temp = nums[0];
        int i = 1;

        for (int i = 1; i< nums.size(); i++) {
            if (nums[i-1] != nums[i]) {
                temp = nums[i];
                rank ++;
            }
            if (rank ==3) return nums[i];
        }
        return nums[0];
        */

        // Time complexity: O(N) Space complexity: O(1) 기준 풀이
        // Pointer 활용
        // long type 사용 이유?? 
        // => 입력 파라미터는 int 타입 벡터 => thirdMax == numeric_limits<long>::min() 이 분기 처리를 thirdMax == numeric_limits<int>::min() 로 하면 
        // 애초에 입력값이 [1,2,-2147483648] 와 같이 int minimum 값을 가지고 들어온 경우 값이 -2147483648 출력되어야 하나 업데이트 안한 것으로 판단하여 2가 return되는 오류 방지
        long firstMax = numeric_limits<long>::min(); // long 자료형이 표현할 수 있는 가장 작은 값으로 초기화
        long secondMax = numeric_limits<long>::min();
        long thirdMax = numeric_limits<long>::min();

        for (int& num : nums) { // nums 참조

            // 1) 배열 원소가 1~3위 값 중 중복이 있으면 건너뜀
            if (num == firstMax || num == secondMax || num == thirdMax ) {
                continue; 
            }
            // 2) 첫 번째 Max 보다 크면 전체 third = second, second = first, first = num 업데이트
            if ( num >= firstMax ) {
                thirdMax = secondMax;
                secondMax = firstMax;
                firstMax = num;
            }
            // 3~4)  이어서 2와 동일
            else if ( num >= secondMax ) {
                thirdMax = secondMax;
                secondMax = num;
            }
            else if ( num >= thirdMax ){
                thirdMax = num;
            }
        }

        // 5) thirdMax가 업데이트가 안된 경우 return the maximum number - 문제 조건 
        if (thirdMax == numeric_limits<long>::min() ) {
            return firstMax ;
        }

        return thirdMax ;

    }
};