class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       // int m = nums.size();
        vector<int> arr;
       // int i =0,j = 0,k = n;
        // while(i!=m){
        //     arr[i++] = nums[j++];
        //     arr[i++] = nums[k++];
        // }
        // return arr;
        for(int i = 0;i < n;i++){
            arr.push_back(nums[i]);
            arr.push_back(nums[i+n]);
        }
        return arr;
    }
};