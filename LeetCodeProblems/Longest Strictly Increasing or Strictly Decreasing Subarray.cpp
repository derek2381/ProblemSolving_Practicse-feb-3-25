// Problem Link
// https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/description/


// Source Code

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
    
        int count = 1, maxI = 1, maxD = 1;
        
        
        for(int i = 0;i < n;i++){
            count = 1;
            for(int j = i;j < n-1;j++){
                if(nums[j] > nums[j+1]) {
                    count++;
                }
                else{
                    count = 1;
                }
                
                if(count > maxI){
                    maxI = count;
                }
            }
        }
        
        for(int i = 0;i < n;i++){
            count = 1;
            for(int j = i;j < n-1;j++){
                if(nums[j] < nums[j+1]){
                    count++;
                }else{
                    count = 1;
                }
                
                if(count > maxD){
                    maxD = count;
                }
            }
        }
        
        if(maxI > maxD){
            return maxI;
        }else{
            return maxD;
        }
    }
};