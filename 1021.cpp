#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    double taka;
    int note;

    cin>>taka;
    //cout<<fixed<<setprecision(2)<<taka<<endl;
    
    cout<<"NOTAS:"<<endl;
    note = (int)taka/100;
    cout<<note<<" nota(s) de R$ 100.00"<<endl;
    taka = taka-(note*100);

    note = (int)taka/50;
    cout<<note<<" nota(s) de R$ 50.00"<<endl;
    taka = taka-(note*50);   
    
    note = (int)taka/20;
    cout<<note<<" nota(s) de R$ 20.00"<<endl;
    taka = taka-(note*20);
    
    note = (int)taka/10;
    cout<<note<<" nota(s) de R$ 10.00"<<endl;
    taka = taka-(note*10);

    note = (int)taka/5;
    cout<<note<<" nota(s) de R$ 5.00"<<endl;
    taka = taka-(note*5);

    note = (int)taka/2;
    cout<<note<<" nota(s) de R$ 2.00"<<endl;
    taka = taka-(note*2);
    taka =taka*100;
    cout<<"MOEDAS:"<<endl;

    note = (int)taka/100;
    cout<<note<<" moeda(s) de R$ 1.00"<<endl;
    taka = taka-(note*100);
    
    note = taka/50;
    cout<<note<<" moeda(s) de R$ 0.50"<<endl;
    taka = taka-(note*50);
    
    note = taka/25;
    cout<<note<<" moeda(s) de R$ 0.25"<<endl;
    taka = taka-(note*25);
    
    note = taka/10;
    cout<<note<<" moeda(s) de R$ 0.10"<<endl;
    taka = taka-(note*10);
    
    note = taka/5;
    cout<<note<<" moeda(s) de R$ 0.05"<<endl;
    taka = taka-(note*5);
    
    note = taka/1;
    cout<<note<<" moeda(s) de R$ 0.01"<<endl;
    //taka = taka-(note*0.01);
    return 0;
}