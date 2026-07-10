#include<iostream>
using namespace std;
int main()
{
    int h1,h2,m1,m2,start,end,d;
    cin>>h1>>m1>>h2>>m2;
    start=(60*h1)+m1;
    end = (60*h2)+m2;
    d=end-start;
    if(d<=0){
        d +=(24*60);
    }
    int hour,min;
    hour=d/60;
    min=d%60;
    cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<min<<" MINUTO(S)"<<endl;
    return 0;
}
