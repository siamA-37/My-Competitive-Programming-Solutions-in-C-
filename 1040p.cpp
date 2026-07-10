#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double n1,n2,n3,n4,avg,score;
    cin>>n1>>n2>>n3>>n4;
    avg=((n1*2)+(n2*3)+(n3*4)+(n4*1))/10.0;
    cout<<fixed<<setprecision(1)<<"Media: "<<avg<<endl;
    int avg2=(int)avg*10;

    if(avg2>=70){
        cout<<"Aluno aprovado."<<endl;
    }
    else if(avg2 < 50){
        cout<<"Aluno reprovado."<<endl;
    }

    else if(avg2>=50 && avg2 <=69){
        cout<<"Aluno em exame."<<endl;
        cin>>score;
        cout<<fixed<<setprecision(1)<<"Nota do exame: "<<score<<endl;
        avg = (score+avg)/2.0;
        avg2=(int)avg*10;

        if(avg2 >=50){
            cout<<"Aluno aprovado."<<endl;
        }
        
        else if(avg2<=49){
            cout<<"Aluno reprovado."<<endl;
        }
        cout<<fixed<<setprecision(1)<<"Media final: "<<avg<<endl;
    }




    return 0;
}