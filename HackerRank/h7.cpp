#include<bits/stdc++.h>
using namespace std;
vector<int> grading(vector<int> grades){
    int a=0,b=0,c=0;
    vector<int>result;
    for(int i=0;i<grades.size();i++){
        if(grades[i]>=38){
            a=grades[i]/5;
            b=(a+1)*5;
            if((b-grades[i])<3){
                result.push_back(b);
            }
            if((b-grades[i])>=3){
                result.push_back(grades[i]);
            }
        }
        if(grades[i] < 38){

            result.push_back(grades[i]);
        }
    }
    return result;
}

int main()
{
    vector<int>grades;
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        grades.push_back(m);
    }
    vector<int>result=grading(grades);
    for(auto x:result){
        cout<<x<<" ";
    }
    cout<<'\n';
    grades.clear();
    return 0;
}