class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int low = 0;
        int hi = (n*m)-1;
        
        while(low<=hi){
            int mid =(low+(hi-low)/2);
            if(matrix[mid/m][mid%m] == target){
                return 1;
            }
            if(matrix[mid/m][mid%m]<target){
                low = mid+1;
            }
            else{
                hi = mid-1;
            }
            
        }
        return 0;
        
    }
};