#include<iostream>
#include<string>
using namespace std;

int main()
{

    int num;
    cout<<"Enter number of guests: "<<endl;
    cin>>num;

    if(num<1){
        cout<<"Number of guests must be at least 1."<<endl;
        return 0;
    }

    string* name= new string[num];
    cin.ignore();
    for(int i=0;i<num;i++){
        cout<<"Enter name for guest - "<<i+1<<" : "<<endl;
        getline(cin,name[i]);
    }

    for(int i=0;i<num;i++){
        cout<<"Guest Name : "<<i+1<<" : "<<name[i]<<endl;
    }

    delete[] name;

    return 0;
}