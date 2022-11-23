#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your Number : ";
    cin>>a;
    if(a>0){
        cout<<"Positive Number : "<<a<<endl;
    }else if(a<0){
        cout<<"Negative Number : "<<a<<endl;
    }else{
        cout<<"Zero : "<<a<<endl;
    }
    return 0;
}