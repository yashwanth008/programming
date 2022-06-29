// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        
        int result = 0;
        for(int i = 0;i<str.size();i++){
            switch(str[i]){
                case 'I':
                        if(str[i+1]=='V'){
                            result+=4;
                            i++;
                        }
                        else if(str[i+1]=='X'){
                            result+=9;
                            i++;
                        }
                        else
                            result+=1;
                    break;
                case 'V':
                        result+=5;
                    break;
                case 'X':
                        if(str[i+1]=='L'){
                            result+=40;
                            i++;
                        }
                        else if(str[i+1]=='C'){
                            result+=90;
                            i++;
                        }
                        else
                            result+=10;
                    break;
                case 'L':
                        result+=50;
                    break;
                case 'C':
                        if(str[i+1]=='D'){
                            result+=400;
                            i++;
                        }
                        else if(str[i+1]=='M'){
                            result+=900;
                            i++;
                        }
                        else
                            result+=100;
                    break;
                case 'D':
                        result+=500;
                    break;
                case 'M':
                        result+=1000;
                    break;
            }
        }
    return result;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends