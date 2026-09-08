#include<iostream>
using namespace std;

float ReadNumber(){

    float Number;
        cout<<"Please enter the number that you want to devide: ";
        cin>>Number;
    return Number;

}

float DevideNumber(float Number){

    float Result = Number/2;
    return Result;
}

void PrintDevidedNumber(float Number){
    
    string result = " \nThe half of the Number "+ to_string(Number) +" is: "+to_string(DevideNumber(Number));
    cout<<result;

}

int main(){

    PrintDevidedNumber(ReadNumber());
    return 0;
}