//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>s;
        
        for(auto i:arr)
        {
            if(s.size()>=1)
            {
                if((s.top() >= 0 && i<0) || (s.top()<0 && i>=0 ))
                {
                    s.pop();
                    continue;
                }
            }
            s.push(i);
        }
        arr.clear();
        while(!s.empty())
        {
            arr.push_back(s.top());
            s.pop();
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Endss