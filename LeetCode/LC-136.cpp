#include<iostream>
using namespace std;
int singleElement(int arr[], int n){
    int XOR = 0;
    for(int i : n){
        XOR = XOR ^ i;
    }
    return XOR;
}
int main()
{
    int arr[100] = {2,2,1};
    cout<<"Single Element : "<<singleElement(arr,100);
    return 0;
}