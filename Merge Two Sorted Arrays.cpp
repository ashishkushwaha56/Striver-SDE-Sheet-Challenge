/* Problem link :- https://www.codingninjas.com/codestudio/problems/ninja-and-sorted-arrays_1214628?topList=striver-sde-sheet-problems&leftPanelTab=0 */

#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	vector<int> ans;
    int l = 0;
    int r = 0;
    for(int i = 0;i<(n+m);i++){
        if(l == m){
            ans.push_back(arr2[r]);
            r++;
        }
        else if(r == n){
            ans.push_back(arr1[l]);
            l++;
        }
        else{
             if(arr1[l] == arr2[r]){
                 ans.push_back(arr1[l]);
                 ans.push_back(arr1[l]);
                 
                 l++;
                 r++;
                 i++;
             }
            else if(arr1[l]<arr2[r]){
                ans.push_back(arr1[l]);
                l++;
            }
            else{
                ans.push_back(arr2[r]);
                r++;
            }
        }
    }
    return ans;
}
