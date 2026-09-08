#include<iostream>
using namespace std;

string ReadPinCode(string Message)
{
    string Pin;
    cout<<Message;
    cin>>Pin;
    return Pin;
    
}

string CheckPin(string Pin)
{
    if (Pin == "1234")
    {
        system("color 2F");
        return "Your Balance is: 7500";
    }else
    {
        system("color 4F");
        CheckPin(ReadPinCode("\nWrong Pin!...enter Pin: "));
    }
    
}

int main()
{
    cout<<CheckPin(ReadPinCode("Please enter The Pin: "));
}