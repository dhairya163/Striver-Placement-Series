// https://leetcode.com/problems/set-matrix-zeroes/

/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.
*/

/*
Solution Time complexity = O(NM)
Solution Space complexity = O(N+M)
*/


class Solution {
public:
     
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row(matrix.size());
        vector<int> col(matrix[0].size());
        
        
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0; j < matrix[0].size(); j++){
                
                if(row[i] || col[j] == 1){
                    matrix[i][j]=0;
                }
            }
        }        
       
    }
};
