#include<iostream>
#include<climits>
using namespace std;
int maximum(int arr[], int n){
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        // if(arr[i] >  maxi){
        //     maxi = arr[i];
        // }
        maxi =max(maxi, arr[i]);
    }
    return maxi;
}
int minimum(int arr[], int n){
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        // if(arr[i] < mini){
        //     mini = arr[i];
        // }
        mini = min(mini, arr[i]);
    } 
    return mini;
}
int main()
{
    int arr[1000] ={12,34,2,35,56,1024};
    cout<<"Maximum : "<<maximum(arr, 1000)<<endl;
    cout<<"Minimum : "<<minimum(arr, 1000)<<endl;
    return 0;
}