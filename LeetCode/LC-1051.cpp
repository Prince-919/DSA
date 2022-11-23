#include<iostream>
using namespace std;
int heightChecker(int arr[], int n)
{
    vector<int> ans;
    ans = arr;
    int count=0;
    sort(ans.begin(), ans.end());
    for(int i=0; i<arr.size(); i++){
        if(arr[i] != ans[i]){
            count++;
        }
    } 
    return count;
}
int main()
{
    return 0;
}