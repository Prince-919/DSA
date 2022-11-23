#include<bits/stdc++.h>
using namespace std;
int maxiAscending(int arr[], int n){
    int ans =0;
    int sum = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > arr[i-1]){
            sum += arr[i];
        }else{
            ans = max(sum , ans);
            sum = arr[i];
        }
    }
    ans = max(sum, ans);
    return ans;
}
int main()
{
    int  arr[100] = {10,20,30,5,10,50};
    cout<<"Maximum Ascending subArray : "<<maxiAscending(arr, 100);
    return 0;
}