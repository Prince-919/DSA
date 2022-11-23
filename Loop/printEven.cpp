#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Your Number : ";
    cin>>n;
    int even = 0;
    while(even <= n){
        cout<<even<<endl;
        even = even + 2;
    }
   
    return 0;
}