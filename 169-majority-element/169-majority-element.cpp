class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> st;
        
        for(auto num : nums){
            st[num]++;
        }
        
        int standard=nums.size()/2;
       
        for(int i=0;i<st.size();i++){
            if(st[i]>standard){
                return i;
            }
        }
        return 0;
    }
};

