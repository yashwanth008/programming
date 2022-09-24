class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = candies.size();
        vector<bool>result(m,0);
        int max = candies[0];
        for(int i =1;i<m;i++){
            if(candies[i] > max){
                max = candies[i];
            }
        }
        for(int i = 0;i<m;i++){
            candies[i] = candies[i] + extraCandies;
            if(candies[i] >= max){
                result[i] = "true";
            }
        }
        return result;
    }
};