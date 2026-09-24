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


int SumOfDigits(int Number)
{
    int Reminder = 0, Sum = 0;

    while (Number > 0)
    {
        Reminder = Number % 10;
        Number = Number / 10;
        Sum += Reminder;

    }

    return Sum;

}

void PrintSumOfDigits()
{
    cout<<"\n\nSum of Digits : "<<SumOfDigits(ReadPositiveNumber("\n\nPlease enter a Positive Number: "));

}

int main()
{
    PrintSumOfDigits();
    return 0;
}