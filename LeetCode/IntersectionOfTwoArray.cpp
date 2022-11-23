#include<bits/stdc++.c>
using namespace std;
vector<int> IntersectionOfTwo(vector<int> arr1 , int n, vector<int> arr2, int m){
    int i=0; int j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr[i]);
            i++;
            j++;
        }else if(arr[i] < arr2[j]){
            i++;
        }else{
            j++;
        }
    }
    return ans;
}
int main(){
    vector<int> arr1;
    vector<int> arr2;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

}