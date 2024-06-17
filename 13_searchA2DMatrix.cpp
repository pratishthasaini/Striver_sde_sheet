class Solution {
public:   
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int high = matrix.size() * matrix[0].size() - 1;
        int low = 0;
        while(low <= high){
            int mid = (high+low) / 2;
            int n = mid/matrix[0].size();
            int m = mid%matrix[0].size();
            if(matrix[n][m] == target) return true;
            else if(matrix[n][m] < target) low = mid+1;
            else high = mid-1; 
        }
    return false;
    }
};
