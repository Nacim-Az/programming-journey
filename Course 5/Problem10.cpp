#include<iostream>
#include<string>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    cout<<Message;
    cin>>Number;

    return Number;
}

int ReverseNumber(int Number)
{
    int Number2 = 0,Reminder = 0;
    
    while(Number > 0)
    {

    Reminder = Number%10;
    Number = Number/10;

    Number2 = Number2*10 + Reminder;

    }

    return Number2;

}

void PrintDigits(int Number)
{
    int Reminder = 0;
    Number = ReverseNumber(Number);
    
    while (Number > 0)
    {
        Reminder = Number%10;
        Number = Number/10;
        cout<<Reminder<<endl;
    }
    
}

int main()
{
    int Number = ReadPositiveNumber("\n\n Please enter a a Positive Number: ");
    PrintDigits(Number);
    return 0;
}