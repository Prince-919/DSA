#include<iostream>
#include<vector>
using namespace std;
int countEqual(int arr[],int k, int n)
{
    int ans =0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j] && (i*j)%k==0)
            {
                ans++;
            }
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Count Equal And Divisible pair : "<<countEqual(arr, 2, n)<<endl;
    return 0;
}