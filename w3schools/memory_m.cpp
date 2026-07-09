#include<iostream>
#include<string>
using namespace std;

int main()
{

    int  num_of_guest,i;
    cout<<"Enter Number of Guest : ";
    cin>>num_of_guest;
    if(num_of_guest<=0){
        cout<<"Please enter number more than 0"<<endl;
        return 0;
    }
    string* guest_name= new string[num_of_guest];
    cin.ignore();
    for(i=0;i<num_of_guest;i++){
        cout<<"Enter Name for - "<<i+1<<": "<<endl;
        getline(cin,guest_name[i]);
    }
    for(i=0;i<num_of_guest;i++){
        cout<<i+1<<". Name : "<<guest_name[i]<<endl;
    }
    delete[] guest_name;
    return 0;
}