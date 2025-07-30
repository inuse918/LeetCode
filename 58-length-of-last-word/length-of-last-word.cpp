class Solution {
public:
    int lengthOfLastWord(string s) {
        int startPtr = 0, endPtr = s.length() -1; 

        /* while (endPtr >= 0 ) {
            if (s[endPtr] == ' ') {
                endPtr--;
                continue;
            } else {
                break;
            }
        }*/
        while (endPtr >= 0 && s[endPtr] == ' ') {
            endPtr--;
        }

        startPtr = endPtr;
        /* while (startPtr >=0){
            if (s[startPtr] == ' '){
                break;
            }
            startPtr --;
        }*/
         while (startPtr >= 0 && s[startPtr] != ' ') {
            startPtr--;
        }
        return endPtr - startPtr; 
    }
    
};