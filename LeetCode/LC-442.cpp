#include<bits/stdc++.h>
using namespace std;
vector<int> DIStringMatch(string s){
    int min =0;
    int max = s.size();
    vector<int> arr;
    // int arr[100];
    for(const char c : s)
    arr.push_back(c =='I' ? min++ : max--);
    arr.push_back(min);
    return arr;
}
int main()
{
    string s;
    cin>>s;
    cout<<DIStringMatch(s);
    return 0;
}