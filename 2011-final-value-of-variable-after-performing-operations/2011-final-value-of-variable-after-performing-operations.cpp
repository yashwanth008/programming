class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int result = 0;
        for(int i = 0;i<operations.size();i++){
           if(operations[i] == "++X" || operations[i] == "X++"){
               result = result + 1;
           }
        if(operations[i] == "--X" || operations[i] == "X--"){
            result = result - 1;
        }
        }
    return result;
        
    }
};