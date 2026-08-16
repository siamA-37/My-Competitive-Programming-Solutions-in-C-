#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum;

    cin>>a>>b;
    char c;
    cin>>c;
    switch (c)
    {
    case '+':
        sum=a+b;
        cout<<"Reult : "<<sum<<endl;
        break;
    case '-':
        sum=a-b;
        cout<<"Reult : "<<sum<<endl;
        break;
    case '*':
        sum=a*b;
        cout<<"Reult : "<<sum<<endl;
        break;
    case '/':
        if(b==0){
            cout<<"Undefined!"<<endl;
            break;
        }
        sum=a/b;
        cout<<"Reult : "<<sum<<endl;
        break;
    default:
        break;
    }
    return 0;
}