class Solution {
public:
    int maxDepth(string s) {
        int open = 0;
        int dep = 0;
        for(char c : s){
            if(c == '('){
                open++;
            }
            if(c ==')'){
                open--;
            }
            dep= max(dep,open);
        }
        return dep;
    }
};