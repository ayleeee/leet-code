class Solution {
public:
    vector<vector<int>> ans;
    void helper(int k, int n, vector<int>& v, int idx){
        if(k==0){
            int sum = 0;
            for(int i=0;i<v.size();i++){
                sum+=v[i];
            }
            if(sum==n){
                ans.push_back(v);
                return;
            }
        }
        
        if(idx>9) return;
        
        v.push_back(idx);
        helper(k-1,n,v,idx+1);
        v.pop_back();
        helper(k,n,v,idx+1);
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v;
        helper(k,n,v,1);
        return ans;
    }
};