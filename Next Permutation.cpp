/* Problem link :- https://www.codingninjas.com/codestudio/problems/next-permutaion_893046?topList=striver-sde-sheet-problems */

#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    vector<int> ans;
    int t = n-1;
    if(n == 1){
        return permutation;
    }
    bool ok = true;
    for(int i = n-1;i>0;i--){
        if(permutation[i-1]<permutation[i]){
            ok = false;
            t = i-1;
            break;
        }
    }
    if(permutation[n-1]>permutation[n-2]){
        swap(permutation[n-1],permutation[n-2]);
        return permutation;
    }
    if(ok){
        sort(permutation.begin(),permutation.end());
        return permutation;
    }
    int required = permutation[t];
    vector<int> vd;
    for(int i = t;i<n;i++){
//         if(permutation[i] == required){
//             continue;
//         }
        vd.push_back(permutation[i]);
    }
    sort(vd.begin(),vd.end());
    auto it = upper_bound(vd.begin(),vd.end(),required);
    int h = *it;
    vd.erase(vd.begin()+(it-vd.begin()));
    
    for(int i = 0;i<t;i++){
        ans.push_back(permutation[i]);
    }
    ans.push_back(h);
    for(auto &x:vd){
        ans.push_back(x);
    }
    return ans;
    
}
