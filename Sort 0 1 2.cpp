#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int l = 0;
   int mid = 0;
   int r = n-1;
    while(mid<=r){
        if(arr[mid] == 0){
            swap(arr[l],arr[mid]);
            mid++;
            l++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid],arr[r]);
            r--;
        }
    }
}
