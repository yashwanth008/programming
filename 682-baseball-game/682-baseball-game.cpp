class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        int top;
        int stop;
        int sum = 0;
        for(int i = 0;i < ops.size() ;i++){
            switch(ops[i][0]){
                case 'C':
                    s.pop();
                    break;
                case 'D':
                    top = s.top();
                    s.push(2 * top);
                    break;
                case '+':
                    top = s.top();
                    s.pop();
                    stop = s.top();
                    s.push(top);
                    s.push(top + stop);
                    break;
                default :
                    int x = atoi(ops[i].c_str());
                    s.push(x);
            }
        }
        while(s.size() > 0){
            sum += s.top();
            s.pop();
        }
        return sum;
        
    }
};