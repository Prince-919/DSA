#include<iostream>
#include<climits>
using namespace std;
int maximum(int arr[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int minimum(int arr[], int n){
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    cin>>n;
    int input[1000];
    for(int i=0; i<n; i++){
        cin>>input[i];
    }
    cout<<"Maximum number is : "<<maximum(input, n)<<endl;
    cout<<"Minimum number is : "<<minimum(input, n)<<endl;
    return 0;
}