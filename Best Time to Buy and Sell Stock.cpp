/* Problem link :- https://www.codingninjas.com/codestudio/problems/stocks-are-profitable_893405?topList=striver-sde-sheet-problems&leftPanelTab=0 */

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int ans = 0;
    int mine = prices[0];
    for(int i = 0;i<prices.size();i++){
        mine = min(mine,prices[i]);
        ans = max(ans,prices[i]-mine);
    }
    return ans;
}
