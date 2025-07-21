class Solution {
public:
    bool isPalindrome(int x) {
        // 방법1 : 내가 작성한 코드
        // string str = to_string(x);
        // string compareStr = str; 
        // reverse(compareStr.begin(), compareStr.end());

        // for(int i =0 ; i < str.length() ; i++) {
        //     if (str[i] != compareStr[i]) { return false; }
        // }
        // return true;

        // 방법2

        if ( x < 0 ) return false ; // 음수는 무조건 false

        long reverse = 0;
        int x2 = x;

        while (x > 0){
            reverse = (reverse * 10 ) + (x % 10);
            x /= 10; 
        }

        return reverse == x2;

    }
};