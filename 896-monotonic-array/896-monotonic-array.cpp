class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int sz = nums.size();
        int countA = 0;
        for(int i=0;i<sz-1;i++){
            if(nums[i]<=nums[i+1]){
                countA+=1;
            }
        }
        
        int countB = 0;
        for(int i=0;i<sz-1;i++){
            if(nums[i]>=nums[i+1]){
                countB+=1;
            }
        }
        if((sz-1)==countA||(sz-1)==countB) return true;
        else return false;
    }
};