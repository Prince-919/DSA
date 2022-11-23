#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the value of a : ";
    cin>>a;
    int b;
    cout<<"Enter the value of b : ";
    cin>>b;
    int operation;
    cout<<"Enter the operation : ";
    cin>>operation;

    switch(operation){
        case '+': cout<<(a+b)<<endl;
                break;

        case '-': cout<<(a-b)<<endl;
                break;

        case '*': cout<<(a*b)<<endl;
                break;

        case '/': cout<<(a/b)<<endl;
                break;

        case '%': cout<<(a%b)<<endl;
                break;

        default:
        cout<<"Enter the valid operation"<<endl;
    }
    return 0;
}