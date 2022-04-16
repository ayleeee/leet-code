class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        
        for (auto num:nums){
            st.insert(num);
        }
        int n = st.size();
        if(n!=nums.size()){
            return true;
        }else{
            return false;
        }
    }
};