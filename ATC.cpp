#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums;
    int n;
    long long sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        nums.push_back(l);
    }
    sum+=abs(nums[0]);//not executed
    for(int i=0;i<nums.size()-1;i++){
        sum+=abs(nums[i]-nums[i+1]);
    }
    cout<<sum<<endl;
    
}