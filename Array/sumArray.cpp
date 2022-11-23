#include<iostream>
using namespace std;
int sum(int arr[], int n){
    int sum =0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[1000]={10,20,30,40,50};
    cout<<"Sum : "<<sum(arr, 1000);
    return 0;
}