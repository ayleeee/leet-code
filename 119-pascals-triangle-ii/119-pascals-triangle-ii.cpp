class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> tri(rowIndex+1);
        tri[0].push_back(1);
        
        for(int i=1;i<=rowIndex;i++){
            tri[i].push_back(1);
            for(int j=1;j<i;j++){
                tri[i].push_back(tri[i-1][j-1]+tri[i-1][j]);
            }
            tri[i].push_back(1);
        }
        
        return tri[rowIndex];
    }
};