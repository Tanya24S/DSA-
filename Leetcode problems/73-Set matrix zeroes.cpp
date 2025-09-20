//Leetcode problem 73: Set matrix zeroes
//Brute force: Tc: O(n*m) Sc:O(m+n)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> positions_rows;
        vector<int> positions_columns;
        int rows=matrix.size();
        int columns=matrix[0].size();
        for(int i=0; i<rows; i++){
            for(int j=0; j<columns; j++){
                if(matrix[i][j]==0){
                    positions_rows.push_back(i);
                    positions_columns.push_back(j);
                }
            }
        }
        for(int i=0; i<positions_rows.size(); i++){
            for(int j=0; j<columns; j++){
                matrix[positions_rows[i]][j]=0;
            }
        }
        for(int i=0; i<positions_columns.size(); i++){
            for(int j=0; j<rows; j++){
                matrix[j][positions_columns[i]]=0;
            }
        }
    }
};
//More optimized code:
