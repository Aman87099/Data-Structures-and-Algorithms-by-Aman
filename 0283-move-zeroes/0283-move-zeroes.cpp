class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int temp[nums.size()];
	    int k = 0;
	    
	    for(int i = 0; i<nums.size(); i++){
	        if(nums[i]!= 0){
	            temp[k] = nums[i];
	            k++;
	        }
	    }
	    while(k<nums.size()){
	        temp[k] = 0;
	        k++;
	    }
	    for(int i = 0; i<nums.size(); i++){
	        nums[i] = temp[i];
	    }
    }
};