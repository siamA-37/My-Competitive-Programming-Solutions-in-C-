#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    int N;
    cin>>T;
    while(T--){
        cin>>N;
        int first_digit=N/pow(10,3);
        int second_digit=(N/100)%10;
        int third_digit=(N/10)%10;
        int fourth_digit=(N%10);
        cout<<"Sum of Four Digits : "<<first_digit+second_digit+third_digit+fourth_digit<<endl;
    }   
    return 0;
}