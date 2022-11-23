#include<iostream>
using namespace std;
// Question code - 7 medium question
int reverse(int x){
    int ans =0;
    while(x !=0){
        int digit = x % 10;
        ans = (ans * 10) + digit;
        x = x / 10;
    }
    return ans;
}
int main()
{
     
    int n;
    cout<<"Enter Your Number : ";
    cin>>n;
    cout<<"Reverse Number : "<<reverse(n)<<endl;
    return 0;
}