#include<iostream>
using namespace std;
// print array function
void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[10] = {1,2,3,4,5};
    printArray(arr,10);
    
    return 0;
}