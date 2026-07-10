#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    int code,amount;
    float price;
    cin>>code>>amount;

    switch (code)
    {
    case 1:
        price = (float)amount*4.00;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<price<<endl;
        break;
    case 2:
        price = (float)amount*4.50;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<price<<endl;
        break;
    case 3:
        price = (float)amount * 5.00;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<price<<endl;
        break;
    case 4:
        price = (float)amount*2.00;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<price<<endl;
        break;
    case 5:
        price = (float)amount*1.50;
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<price<<endl;
        break;
    default:
        break;
    }
    return 0;
}