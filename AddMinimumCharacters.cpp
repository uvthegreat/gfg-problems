//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    bool ispal(string s)
    {
        int i=0, j=s.length()-1;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;j--;
        }
        return true;
    }
    
    int addMinChar(string str){    
        //code here
        int cnt=0;
        for(int i=str.length()-1;i>=1;i--)
        {
            if(ispal(str.substr(0,i+1))) return cnt;
            cnt++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends