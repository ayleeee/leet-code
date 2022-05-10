class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(int num,vector<int>v,int n,int k){
        if(v.size()==k) {
            ans.push_back(v);
            return;
        }
        for(int j=num;j<=n;j++){
            v.push_back(j);
            helper(j+1,v,n,k);
            v.pop_back();
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> v;
        helper(1,v,n,k);
        return ans;
    }
};