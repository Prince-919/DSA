#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // int a = 2;
    for(int i=2; i<n; i++){
        if(n % i == 0){
            cout<<"Not a Prime Number"<<endl;
        }else{
            cout<<"Prime Number"<<endl;
        }
    }
    return 0;
}