class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int result = 0;
        for(int i = 0;i<n;i++){
            int word = 0;
            for(int j = 0;j < sentences[i].length() ;j++){
                if(sentences[i][j] == ' '){
                    word+=1;
                }
            }
            result = max(result,word+1);
        }
        
        
        return result;
        
    }
};