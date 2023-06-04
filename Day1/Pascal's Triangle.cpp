class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle(numRows);
        
        for(int x = 0; x < numRows; x++) {
            triangle[x].resize(x + 1);
            for(int y = 0; y <= x; y++) {
                if(y == 0 || y == x) {
                    triangle[x][y] = 1;
                }
                else {
                    triangle[x][y] = triangle[x-1][y-1] + triangle[x-1][y];
                }
            }
        }
        
        return triangle;
    }
};
