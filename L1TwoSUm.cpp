#include<bits/stdc++.h>
using namespace std;
int target;
vector<int> test(vector<int>nums){
    int s=nums.size();
    vector<int> result;
    if(s<2){
        return result;
    }

    else{
        for(int i=0;i<s;i++){
            if((nums[i]+nums[i+1])==target){

                result.push_back(i);
                result.push_back(i+1);
                return result;
                break;
            }
        }
    }
    return result;
}
int main()
{
    vector<int>nums;
    cin>>::target;
    int n;
    for(int i=0;;i++){
        cin>>n;
        nums.push_back(n);
        if(cin.peek() == '\n'){
            break;
        }
    }    
    vector<int> result =test(nums);
    cout<<'\n';
    if(!(result.empty())){
        
        for(auto x:result){
            cout<<"["<<x<<"]"<<"";
        }
    }
    cout<<'\n';
    return 0;
}