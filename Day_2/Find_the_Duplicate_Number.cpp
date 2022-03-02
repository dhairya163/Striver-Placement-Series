// https://leetcode.com/problems/find-the-duplicate-number/


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==i+1){
                continue;
            }
            while(1){
                if(nums[i] == i+1){
                    break;
                }
                if(nums[i] == nums[nums[i]-1]){
                    return nums[i];
                }
                else{
                    swap(nums[i],nums[nums[i]-1]);
                }
            }
        }
        return -1;
    }
};
