#include<bits/stdc++.h>
using namespace std;
 void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }
void swapAlternate(int arr[] , int n){
    for(int i=0; i<n; i += 2){
        if(arr[i+1 < n]){
            swap(arr[i], arr[i+1]);
        }
    }
}
int main()
{
    int arr1[6] = {7, 5, 4, 3, 2, 1};
    int arr2[5] = {9,6,7,4,5};
    swapAlternate(arr1, 6);
    printArray(arr1,6);
    return 0;
}