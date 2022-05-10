class Solution {
public:
    vector<vector<int>> ans;
    void helper(int n,vector<int>& nums,int idx){
        if(idx==n){
            ans.push_back(nums);
            return;
        }
        
        for(int i=idx;i<=n;i++){
            swap(nums[idx],nums[i]);
            helper(n,nums,idx+1);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int sz = nums.size()-1;
        helper(sz,nums,0);
        return ans;
    }
};

