class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> s;
        vector<int> ans = prices;
        for(int i = 0;i < prices.size() ; i++){
            while((!s.empty()) && (prices[s.top()] >= prices[i])){
                ans[s.top()] = prices[s.top()] - prices[i];
                s.pop();
            }
            s.push(i);
        }
        return ans;
        }    
        
};
