class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> tab(256,-1);
        int maxLen = 0;
        int start = -1;
        for(int i = 0; i< s.size();i++){
            if(tab[s[i]] > start){
                start = tab[s[i]];
            }
            tab[s[i]] = i;
            maxLen = max(maxLen,i - start);
        }
        return maxLen;
    }
};