#include <algorithm>
#include <iostream>
using namespace std;
int arrayPartition(int arr[], int n)
{
    int sum=0;
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i=i+2)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array of Partition Max Sum :"<<arrayPartition(arr,n);
    return 0;
}