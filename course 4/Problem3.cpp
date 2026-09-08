#include<iostream>
using namespace std;

enum enNumberType{Odd, Even};

short ReadNumber(){

    short Number;
    cout<<" Please enter the number that you want to check: ";
    cin>>Number;
    return Number;

}

enNumberType CheckOddOrEven(short Number){
    
    short result = Number%2;
    if (result == 0 )
    {
        return enNumberType::Even;
    }
    else
    {
        return enNumberType::Odd;
    }
    
}

void PrintNumberType(enNumberType NumberType){

    if (NumberType == enNumberType::Even)
    {
        cout<<"\n The Number is Even";
    }else
    {
        cout<<"\n The Number is Odd";
    }
    
}

int main(){

    PrintNumberType(CheckOddOrEven(ReadNumber()));
    return 0;
}