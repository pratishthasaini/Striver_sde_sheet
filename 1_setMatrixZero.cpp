class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                   matrix[i][0] = 0;
                   if(j != 0){
                    matrix[0][j] = 0;
                   }
                   else{
                    col0 = 0;
                   }
                }
            }
        }
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                if(matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
                else if(matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        if(matrix[0][0] == 0){
            for(int i = 0; i < m; i++){
                matrix[0][i] = 0;
            }
        }

        if(col0 == 0){
            for(int i = 0; i < n; i++){
                matrix[i][0] = 0;
            }
        }
    }
};



// store all the occurances of matrix's 0 in 1st row and column .... we'll need one extra col to store column 0 so we'll take it as int 
// ***********important**********
//first set the inner matrix;s value 0 .. so the outer record would be safe
// and then update the matrix acc. to the value matrix[0][0] 
//at last check the col0
// *********DANGER************
// checking col0 before matrix[0][0] can modify the data of matrix[0][0]
