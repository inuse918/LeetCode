class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        /*if (arr.empty() || arr.size()==0) return ;
        for (int i = 0 ; i <arr.size(); i++){
            if (arr[i]==0){
                for(int j = arr.size()-1;j>i;j--){
                    arr[j] = arr[j-1];
                }
                i++;
            }
        }*/
        // Solutions
        int possibleDups = 0; //arr 내 복제되는 0 개수
        int length = arr.size()-1;

        // 최종 arr 들어가는 원본 arr 끝 위치 (0이 아닌)
        for (int left = 0; left <= length - possibleDups; left++) {
            if (arr[left] == 0) {
                if (left == length - possibleDups) {
                    arr[length] = 0;
                    length --;
                    break;
                }
                possibleDups++;
            }
        }
        int last = length - possibleDups; //[1,0,2,3,0,4,5,0] 에서는 last = 7 - 2  즉 index 5

        // i는 5부터 0까지
        for (int i = last; i>=0 ;i--){
            if (arr[i]==0){ //2회) arr[4] == 0이므로 5회) i가 1이므로 arr[1] == 0
                arr[i+possibleDups] = 0; //2회) arr[4+2] =0, 5회) arr[1+1] =0;
                possibleDups--; 
                arr[i + possibleDups] = 0; //2회) arr[4+1] =0 5회) arr[1+0] = 0;
            } 
            else {
                arr[i+possibleDups] = arr[i]; // 1회) arr[5+2] = arr[5]; 3회) arr[3+1] = arr[3]; 4회) arr[2+1] == arr[2]; 6회) arr[0+0] = arr[0]; >그대로 
            }
        }
    }
};