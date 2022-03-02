// https://leetcode.com/problems/merge-intervals/submissions/

/*
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==0){
            return intervals;
        }
        vector<vector<int>> mergedoverlapping;
        sort(intervals.begin(),intervals.end());
        vector<int> temp = intervals[0];
        
        for(auto i:intervals){
            if(i[0]<=temp[1]){
                temp[1] = max(i[1],temp[1]);
            }
            else{
                mergedoverlapping.push_back(temp);
                temp = i;
            }
        }
        mergedoverlapping.push_back(temp);
        return mergedoverlapping;
    }
};
