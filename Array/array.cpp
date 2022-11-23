#include<iostream>
using namespace std;

int main()
{
    // declare in array
    int arr[10];

    // Access in Array
    cout<<"Access at 0 index : "<<arr[0]<<endl;
    cout<<"Access at 1 index : "<<arr[1]<<endl;
    cout<<"Access at 2 index : "<<arr[2]<<endl;
    cout<<"Access at 3 index : "<<arr[3]<<endl;
    cout<<"Access at 4 index : "<<arr[4]<<endl;
    cout<<"Access at 5 index : "<<arr[5]<<endl;
    cout<<"Access at 6 index : "<<arr[6]<<endl;
    cout<<"Access at 7 index : "<<arr[7]<<endl;
    cout<<"Access at 8 index : "<<arr[8]<<endl;
    cout<<"Access at 9 index : "<<arr[9]<<endl;


    cout<<endl; //newLine
    // Initialisation
    int arr1[5] = {1,2,3,4,5};
    cout<<"index 0 : "<<arr1[0]<<endl;
    cout<<"index 1 : "<<arr1[1]<<endl;
    cout<<"index 3 : "<<arr1[2]<<endl;
    cout<<"index 4 : "<<arr1[3]<<endl;
    cout<<"index 5 : "<<arr1[4]<<endl;
    cout<<"index garbag value : "<<arr1[5]<<endl;
    cout<<endl<<endl<<"Everything is fine"<<endl<<endl;

    return 0;
}