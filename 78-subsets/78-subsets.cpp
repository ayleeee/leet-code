class Solution {
public:
    vector<vector<int>> v;
    void helper(vector<int> vec, vector<int>& nums, int idx){
        if(nums.size()==idx){
            v.push_back(vec);
            return;
        }
        
        helper(vec,nums,idx+1);
        vec.push_back(nums[idx]);
        helper(vec,nums,idx+1);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> vec;
        helper(vec,nums,0);
        return v;
    }
};
