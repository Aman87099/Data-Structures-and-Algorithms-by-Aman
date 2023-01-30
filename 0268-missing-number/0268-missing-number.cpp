class Solution {
public:
    int missingNumber(vector<int>& nums) {
         
        int arrsum = 0;
    for(int i = 0; i<nums.size(); i++){
        arrsum = arrsum+nums[i];
    }
    int N = nums.size();
    int sum = N*(N+1)/2;
    
    int finalans = sum-arrsum;
    return finalans;
    }
};