class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<=nums.size();i++){
            sum+=i;
        }
        
        for(int j=0;j<nums.size();j++){
            sum-=nums[j];
        }
        return sum;
    }
};