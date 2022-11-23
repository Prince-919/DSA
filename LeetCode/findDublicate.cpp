#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(int arr[]){
    int ans =0;
    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    for(int i=0; i<arr.size(); i++){
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<findDuplicate(arr,n);
    return 0;
}