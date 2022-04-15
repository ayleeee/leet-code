class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for (auto num : nums){
            st.insert(num);
        }
        
        int i = 0;
        int len =st.size();
        for (auto x : st){
            nums[i]=x;
            i++;
        }
        return len;
    }
};