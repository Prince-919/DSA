#include<iostream>
using namespace std;
int oddConsecutive(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]%2 !=0 && arr[i+1]%2 != 0 && arr[i]%2 != 0){
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[100] = {1,2,34,3,4,5,7,23,12};
    cout<<oddConsecutive(arr, 100);
    return 0;
}