#include<iostream>
using namespace std;

struct stInfos{

    string Firstname;
    string Lastname;

};

stInfos ReadInfos(){

    stInfos PersonInfos;
    cout<<"\n Please enter the first name: ";
    cin>>PersonInfos.Firstname;
    cout<<"\n Please enter the last name: ";
    cin>>PersonInfos.Lastname;

    return PersonInfos;
}

string GetFullName(stInfos PersonInfos){
    string FullName = "";
        FullName = PersonInfos.Firstname + " " +PersonInfos.Lastname;
    return FullName;
}

void PrintFullName(string FullName){

    cout<<"\n Your full name is : "<<FullName;
}

int main(){
    PrintFullName(GetFullName(ReadInfos()));
    return 0;
}