// https://leetcode.com/problems/pascals-triangle/

/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr(numRows);
        int k=1;
        for(int i=0;i<numRows;i++){
            for(int j=0;j<k;j++){
            if(j==0){
                arr[i].push_back(1);
            }
            else if(j==k-1){
                arr[i].push_back(1);
            }
            else{
                arr[i].push_back(arr[i-1][j-1]+arr[i-1][j]);
            }
            }
            k=k+1;
        }
        return arr;
    }
};
