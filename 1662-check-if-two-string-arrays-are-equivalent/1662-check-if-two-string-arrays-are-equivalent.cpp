class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans1="";
        string ans2="";
        for(string s1: word1)
            ans1+=s1;
        for(string s2: word2)
            ans2+=s2;
        return ans1==ans2;
    }
};