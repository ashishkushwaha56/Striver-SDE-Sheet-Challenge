/* Problem link:- https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_3846774?topList=striver-sde-sheet-problems */

#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	vector<bool> row(matrix.size()),column(matrix[0].size());
    for(int i = 0;i<matrix.size();i++){
        for(int j = 0;j<matrix[i].size();j++){
            if(!matrix[i][j]){
                row[i] = true;
                column[j] = true;
            }
        }
    }
    for(int i = 0;i<matrix.size();i++){
        for(int j = 0;j<matrix[0].size();j++){
            if(row[i]){
                matrix[i][j] = 0;
            }
            if(column[j]){
                matrix[i][j] = 0;
            }
        }
    }
}
