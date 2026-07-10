#include<iostream>
using namespace std;

int main()
{
    int taka,note,n;
    cin>>taka;
    cout << taka << endl;
    note=taka/100;
    cout<<note<<" nota(s) de R$ 100,00"<<endl;
    taka%=100;

    note=taka/50;
    cout<<note<<" nota(s) de R$ 50,00"<<endl;
    taka %=50;

    note=taka/20;
    cout<<note<<" nota(s) de R$ 20,00"<<endl;
    taka %=20;

    note=taka/10;
    cout<<note<<" nota(s) de R$ 10,00"<<endl;
    taka %=10;

    note=taka/5;
    cout<<note<<" nota(s) de R$ 5,00"<<endl;
    taka %=5;
    note=taka/2;
    cout<<note<<" nota(s) de R$ 2,00"<<endl;
    taka %=2;

    note=taka/1;
    cout<<note<<" nota(s) de R$ 1,00"<<endl;

    
    return 0;
}