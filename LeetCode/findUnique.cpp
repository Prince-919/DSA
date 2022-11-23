#include<bits/stdc++.h>
using namespace std;
// Find Unique Number 
int findUnique(int arr[], int n){
    int ans=0;
    for(int i=0; i<n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Find Unique : "<<findUnique(arr,n);
 
    return 0;
}