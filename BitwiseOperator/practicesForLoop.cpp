#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    for(;;){
        if(i<=n){
            cout<<i<<" ";
        }else{
            break;// agar break statement ko use nhi karte to infinite loop me chala jayega  for(;;) iske vajah se 
        }
        i++;
    }
    return 0;
}