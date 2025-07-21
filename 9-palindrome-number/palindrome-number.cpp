class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string compareStr = str; 
        reverse(compareStr.begin(), compareStr.end());

        for(int i =0 ; i < str.length() ; i++) {
            if (str[i] != compareStr[i]) { return false; }
        }
        return true;
    }
};