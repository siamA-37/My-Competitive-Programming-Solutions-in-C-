#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double n1,n2,n3,n4,avg,score;
    cin>>n1>>n2>>n3>>n4;
    avg =(n1*2+n2*3+n3*4+n4*1)/10.0;

    cout<<fixed<<setprecision(1)<<"Media: "<<avg<<endl;

    if(avg >=7.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else if(avg < 5.0)
    {
        cout<<"Aluno reprovado."<<endl;
    }
    else if(avg>5.0 && avg < 6.9)
    {
        cout<<"Aluno em exame."<<endl;
       
        cin>>score;

        cout<<fixed<<setprecision(1)<<"Nota do exame: "<<score<<endl;
        avg = (score+avg)/2.0;
        if(avg >= 5.0)
        {
            cout<<"Aluno aprovado."<<endl;
        }
        else if(avg <= 4.9)
        {
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<fixed<<setprecision(1)<<"Media final: "<<avg<<endl;
    }



    return 0;
}