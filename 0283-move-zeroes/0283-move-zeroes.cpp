class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
      /*  int temp[nums.size()];
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
	    }*/
        
        int i = 0;
        for(int j = 0; j<nums.size(); j++){
            if(nums[j]!= 0){
                swap(nums[j], nums[i]);
                i++;
            }
        }
    }
};