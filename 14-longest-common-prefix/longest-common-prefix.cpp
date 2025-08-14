class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string pref = strs[0];
        int pref_len = strs[0].length();

        for (int i = 1 ; i < strs.size() ; i++ ) {
            string temp = strs[i];
            // 접두사 길이 체크
            /*
                strs[0].length > strs[1].length -> strs[0]이 strs[1] 의 접두사가 될 수 없음
                OR
                앞부분 같은 거 찾기 
            */
            while (pref_len > temp.length() || pref!= temp.substr(0, pref_len)) { 
                pref_len--; // 같은 앞부분 나올때까지 비교할 길이 감소
                if (pref_len ==0 ) return ""; 
                pref = pref.substr(0, pref_len);
            }
           
        }
        return pref;
    }
};