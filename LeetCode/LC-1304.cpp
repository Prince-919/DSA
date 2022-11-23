#include<iostream>
#include<vector>
using namespace std;
int findNUniqueInteger(int ans[], int n)
{
    int x = n / 2;
    while(x > 0)
    {
        ans.push_back(x);
        ans.push_back(-x);
        x--;
    }
    if(n & 1)
    {
        ans.push_back(0);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<findNUniqueInteger(arr,n);
    return 0;
}