class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int dep = 0;
        int cnt = 0;
        int i = 0;
        while(i < s.length()){
            if(s[i] == '('){
                st.push(s[i]);
                cnt++;
            }
            else if(s[i] == ')'){
                st.pop();
                cnt--;
            }
            dep = max(dep,cnt);
            i++;
        }
        return dep;
    }
};
