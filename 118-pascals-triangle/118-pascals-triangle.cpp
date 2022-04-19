class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tri(numRows);
        tri[0].push_back(1);
        
        for(int i=1;i<numRows;i++){
            tri[i].push_back(1);
            for(int j=1;j<i;j++){
                tri[i].push_back(tri[i-1][j-1]+tri[i-1][j]);
            }
            tri[i].push_back(1);
        }
        return tri;
    }
};