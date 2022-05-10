class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int sz = triangle.size();
        int dp[sz+1];
        for(int i=0;i<=sz;i++) dp[i]=0;
        
        for(int i=sz-1;i>=0;i--){
            for(int j=0;j<triangle[i].size();j++){
                dp[j]=triangle[i][j]+min(dp[j],dp[j+1]);
            }
        }
        return dp[0];
    }
};