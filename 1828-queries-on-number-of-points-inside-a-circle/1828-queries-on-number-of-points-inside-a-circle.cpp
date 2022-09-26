class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> result;    
        for(int i = 0; i < queries.size(); i++) {
            int count = 0;
            for(int j = 0; j < points.size(); j++) {
                int x = points[j][0]-queries[i][0];
                int y = points[j][1]-queries[i][1];
                
                if( pow(x,2) + pow(y,2) <= pow(queries[i][2],2)) {
                    count++;
                }
            }
            result.push_back(count);
        }
        
        return result;

        
    }
};