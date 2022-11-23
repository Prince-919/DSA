#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter your Number : ";
    cin>>n;
    int odd = 1;
    while(odd <= n){
        cout<<odd<<endl;
        odd = odd + 2;
    }
    return 0;
}