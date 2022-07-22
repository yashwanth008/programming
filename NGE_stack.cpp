//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> ans;
        stack<long long> s;
        ans.push_back(-1);
        s.push(arr[n-1]);
        for(long long i = n-2; i >= 0; i--){
            while((!s.empty()) && s.top() <= arr[i]){
                s.pop();
            }
            long long next = (s.empty()) ? -1 : s.top();
            ans.push_back(next);
            s.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};




//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends

