#include<iostream>
using namespace std;
int numberOfStudent(int startTime[], int endTime[], int queryTime){
    int ans =0;
    for(int i=0; i<n;i++){
        if(startTime[i] <= queryTime && endTime[i] >= queryTime){
            ans++;
        }
    }
    return ans;
}
int  main()
{
    int arr1[] = {1,2,3};
    int arr2[] = {3,2,7};
    cout<<numberOfStudent(3,3,4);
    return 0;
}