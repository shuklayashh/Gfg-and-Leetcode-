#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int minimumNumberOfDeletions(string s) { 
        // code here
        int n = s.size();
        
        string R = string(s.rbegin(), s.rend());
        
        int dp[n+1][n+1] = {};
        
        for(int i =0; i<n; i++){
            for(int j =0; j<n; j++){
                
                if(s[i] == R[j]){
                    dp[i+1][j+1] = 1+dp[i][j];
                }
                else {
                    dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
                }
            }
        }
        
        return n-dp[n][n];
    } 
};

int main(){
    int t;
    cin>>t;

    while(t--){
        string D:
        cin>>S;
        solution obj;
        cout<<obj.minimumNumberOfDeletion(S)<<endl;
    }
    return 0;
}