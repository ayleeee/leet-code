class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& nums,int n,int k){
        if(k==n){
            ans.push_back(nums);
            return;
        }
        for(int i=k;i<n;i++){
            swap(nums[k],nums[i]);
            helper(nums,n,k+1);
            swap(nums[k],nums[i]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int sz = nums.size();
        helper(nums,sz,0);
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};

