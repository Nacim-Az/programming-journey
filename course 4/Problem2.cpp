#include<iostream>
using namespace std;

string ReadName(){

    string Name;

        cout<<"Please enter your full name: ";
        getline(cin,Name);

    return Name;

}

void PrintName(string Name){

    cout<<"\n Your Name is: "<<Name;
}

int main(){

    PrintName(ReadName());
    return 0;
}