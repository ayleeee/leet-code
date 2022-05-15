class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int sz = nums.size();
        vector<int> ans(sz);
        for(int i=0;i<nums.size();i++){
            ans[(i+k)%sz]=nums[i];
        }
        nums=ans;
    }
};