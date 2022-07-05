#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> ans(n);
      int i = 0;
    while(i<n){
       if(i<2){
           for(int j = 0;j<i+1;j++){
               ans[i].push_back((long long int)1);
           }
       }
        else{
            for(int j=0;j<i+1;j++){
                if(j>0 and j<i){
                    ans[i].push_back((long long int)ans[i-1][j]+ans[i-1][j-1]);
                }
                else{
                    ans[i].push_back((long long int)1);
                }
            }
        }
        i++;
    }
    return ans;
}
