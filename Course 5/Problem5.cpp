#include<iostream>
#include<string>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout<<Message;
        cin>>Number;

    } while (Number < 0);
    
    return Number;
}

void PrintDigits(int Number)
{
    int Reminder = 0;

    while (Number > 0)
    {
        Reminder = Number  % 10;
        Number = Number /10;
        cout<<Reminder<<endl;
    }
    
}

int main()
{
    PrintDigits(ReadPositiveNumber("\n\nPlease Read a Positive Number: "));

    return 0;
}