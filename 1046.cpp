#include<iostream>
using namespace std;
int main()
{

    int start,end,duration;
    cin>>start>>end;


    if(start == end ){
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }

    if(start > end){
        duration=(24-start)+end;
        
        cout<<"O JOGO DUROU "<<duration<<" HORA(S)"<<endl;
    }
    else if(start < end ){
        duration=end-start;
        cout<<"O JOGO DUROU "<<duration<<" HORA(S)"<<endl;
    }

    return 0;
}