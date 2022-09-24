class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> result;
        
        for(int i = 0;i < nums.size();i++){
            int count =0;
            for(int j = 0;j <nums.size();j++){
                if(nums[i] > nums[j]){
                    count++;
                }
                
            }
            result.push_back(count);
        }
        // int i = 0;
        // while(i!=m){
        //     int ele = nums[i];
        //     for(int j = 1;j < m;j++){
        //         if(ele > nums[i]){
        //             count++;
        //         }
        //     }
        //     result.push_back(count);
        //     count = 0;
        //     i++;
        // }
        return result;  
        
    }
};