class Solution {
public:
    int trap(vector<int>& height) {
        int result = 0;
        int displacement = 0;
        int block = 0;
        int start = height[0];
        int n = height.size();
        for(int i = 1;i<n;i++){
            if(start > height[i]){
                block+=height[i];
                displacement+=1;
            }
            else if(start < height[i]){
                result+=(start*displacement) - block;
                displacement = 0;
                block = 0;
                start = height[i];
            }
            else{
                start = height[i];
            }
        }
        
        start = height[n-1];
        displacement = 0;
        block =0;
        for(int i = n-2;i >= 0;i--){
            if(start > height[i]){
                block+=height[i];
                displacement+=1;
            }
            else if(start <= height[i]){
                result+=(start*displacement) - block;
                displacement = 0;
                block = 0;
                start = height[i];
            }
        }
       
        
        return result;
        
    }
};