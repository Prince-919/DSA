#include<bits/stdc++.h>
using namespace std;
bool search(int arr[], int n, int key){
    for(int i=0;i<n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {24, 36, -34, 2, 37, 89,0, 37};
    int key;
    cin>>key;
    bool found = search(arr, 10, key);
    if(found){
        cout<<"Key is Present"<<endl;
    }else{
        cout<<"Key is Absent"<<endl;
    }
    return 0;
}