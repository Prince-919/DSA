#include<iostream>
using namespace std;

int main()
{
    int i=7;
    cout<<"Post Increment : "<<(i++)<<endl;
    // i = 8, i=9;
    cout<<"PreIncrement : "<<(++i)<<endl; 
    // i = 10;

     cout<<"Post Increment : "<<(i--)<<endl;
     // i = 10, i=9;
      cout<<"Pre Increment : "<<(--i)<<endl;
      // i = 8;
    return 0;
}
