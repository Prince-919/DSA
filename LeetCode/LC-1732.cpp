#include<iostream>
using namespace std;
int findHightestAltitude(int arr[], int n){
    int current =0;
    int maximum =0;
    for(int i=0; i<n; i++){
        current += arr[i];
        maximum = max(current, maximum);
    }
    return maximum;
}
int main()
{
    int arr[100] = {-5,1,5,0,-7};
    cout<<"Maximum Altitude : "<<findHightestAltitude(arr,100)<<endl;
    return 0;
}