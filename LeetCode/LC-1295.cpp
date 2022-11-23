
// LeetCode-1295 
// Find Number With Even Number of digits

#include<iostream>
using namespace std;
int findNumberWithEven(int arr[], int n)
{
    int ans =0;
    for(int i=0; i<n;i++)
    {
        int digit =0;
        while(arr[i] != 0){
            arr[i] /= 10;
            digit++;
        }
        if(digit%2==0)
        {
            ans++;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<findNumberWithEven(arr,n);
    return 0;
}