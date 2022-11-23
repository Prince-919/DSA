#include<iostream>
using namespace std;
int* replaceElementWithGreater(int arr[],int n){
    int max = -1;
    for(int i=n-1; i>=0; i--){
        int temp = arr[i];
        arr[i] = max;
        if(max < temp){
            max = temp;
        }
    }
    return arr;
}
int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0; i<n;  i++)
    {
        cin>>arr[i];
    }
    cout<<replaceElementWithGreater(arr,n);
    return 0;
}