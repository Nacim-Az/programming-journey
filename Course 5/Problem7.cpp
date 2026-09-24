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

    } while (Number <= 0);

    return Number;
    
}

int ReverseNumber(int Number)
{
    int Reminder = 0, Number2 = 0;


    while (Number > 0)
    {
    
        Reminder = Number %10;
        Number = Number / 10;

        Number2 = Number2 * 10 + Reminder;
    }
    
    return Number2;


}

int main()
{
   cout<< ReverseNumber(ReadPositiveNumber("Please enter a Positive Number: "));
}