#include<iostream>
using namespace std;
int main()
{
    char ch = 26;
    cin>>ch;
    if(ch=='a' && ch=='z'){
        cout<<"This is a lowercase";
    }else if(ch<='A' && ch>='Z'){
        cout<<"This is a UpperCase";
    }else{
        cout<<"This is a numeric";
    }
    return 0;

}