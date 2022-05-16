class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        if(nums.size()<=2){
            return nums[0];
        }
        return nums[2];
    }
};