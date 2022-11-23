#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int r = 1;
    while(r <= n){
        // cout<<r;
        int c = 1;
        int v= r;
        while(c <= r){
            cout<<v<<" ";
            v++;
            c++;
        }
        cout<<endl;
        r++;
    }
    return 0;
}