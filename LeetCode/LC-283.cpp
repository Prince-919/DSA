#include<iostream>
using namespace std;
int moveZeros(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            arr[count] = arr[i];
            count++;
        }
    }
    for(; count<n; count++){
        arr[count] = 0;
    }
}
int main()
{
    int arr[5] = {0,1,0,3,12};
    cout<<moveZeros(arr, 5);
    return 0;
}