class Solution {
public:
    string defangIPaddr(string address) {
        string rs;
        for(int i = 0;i < address.size();i++){
            if(address[i] == '.'){
                rs+="[.]";
            }
            else
                rs+=address[i];
                continue;
        }
        return rs;
    }
};