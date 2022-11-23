#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid =(start + end) /2;
    int ans =-1;
    while(start <= end){
        if(arr[mid] == key){
            ans =mid;
            end = mid -1;
        }else if(arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
}
// Last Occurrence
int lastOcc(int arr[], int n,int key){
    int start=0;
    int end =n-1;
    int mid = (start + end)/2;
    int ans =-1;
    while(start <=end){
        if(arr[mid] == key){
            ans = mid;
            start =mid + 1;
        }else if(arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid =(start + end)/ 2;
    }
}
int main()
{
    int arr[10] = {1,2,3,4,4,4,4,4,5,6};
    cout<<"First Occurrence of 4 at index : "<<firstOcc(arr,10,4)<<endl;
    cout<<"Last Occurrence of 4 at index : "<<lastOcc(arr,10,4)<<endl;
    return 0;
}