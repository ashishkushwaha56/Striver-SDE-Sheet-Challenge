/* Problem link :- https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_1112602?topList=striver-sde-sheet-problems&leftPanelTab=1 */

#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	set<int> s;
    for(int i = 0;i<n;i++){
        if(s.find(arr[i])!=s.end()){
            return arr[i];
        }
        s.insert(arr[i]);
    }
    return 0;
}
