#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0, b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=n; i++){
        int sum = a + b;
        a = b;
        b = sum;
        cout<<sum<<" ";
    }
    return 0;
}