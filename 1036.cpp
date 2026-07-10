#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{

    double a,b,c,d,R1,R2;
    cin>>a>>b>>c;

    d=pow(b,2)-4*a*c;

    if(a==0 || d<0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else{

        R1 = (-b + sqrt(d))/(2.*a);
        R2 = (-b - sqrt(d))/(2.*a);

        cout<<fixed<<setprecision(5)<<"R1 = "<<R1<<endl;
        cout<<fixed<<setprecision(5)<<"R2 = "<<R2<<endl;

    }

    return 0;
}