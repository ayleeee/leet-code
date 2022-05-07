class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto num:nums1) mp[num]++;
        for(auto num:nums2){
            if(mp[num]){
                ans.push_back(num);
                mp[num]--;
            }
        }
        return ans;
    }
};

