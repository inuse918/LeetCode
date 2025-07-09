class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        /*int n = arr.size();
        if(n < 3) return false; // 길이 3 미만은 해당 X 
        int i = 1;

        // i가 arr.size까지 오르막인경우 i++
        while(i < n && arr[i] > arr[i-1]) i++; 
        // i가 1(오르막 없음) || i == arr.size면 return false;
        if(i == 1 || i == n) return false; 
        // i가 정점에서 arr.size까지 내리막인경우 i ++
        while(i < n && arr[i] < arr[i-1]) i++;
        
        // i 가 arr.size까지 내리막 유지 하면 true 리턴
        return (i==n);*/

        

        if(arr.size() < 3 
            || arr[0] > arr[1] 
            || arr[arr.size()-1] > arr[arr.size()-2]) {
            return false;
        }
        int i=0;
        for(;i<arr.size()-1;i++){    
            if(arr[i] >= arr[i+1]){ // 내림차순 마주하면 break. 여기서 i는 정점
                break;
            }
        }

        for(;i<arr.size()-1;i++){
            if(arr[i] <= arr[i+1]){ // 정점에서 오르막길 다시 발견하면 false
                return false;
            }
        }
        return true;
    }
};