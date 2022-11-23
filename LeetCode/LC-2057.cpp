#include<iostream>
using namespace std;
int smallestIndexWithEqual(int arr[], int n){
    for(int i=0; i<n; i++){
        if(i % 10 == arr[i]){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<smallestIndexWithEqual(arr,n);
    return 0;
}