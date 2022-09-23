class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m = nums.size();
        vector<int> arr(m,0);
        int i =0,j = 0,k = n;
        while(i!=m){
            arr[i++] = nums[j++];
            arr[i++] = nums[k++];
        }
        return arr;
    }
};
