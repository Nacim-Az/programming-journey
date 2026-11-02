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


int ReverseNumber(int Number)
{
    int Reminder = 0, ReversedNumber = 0;

    while (Number != 0)
    {
        Reminder = Number%10;
        Number = Number/10;
        ReversedNumber = ReversedNumber * 10 + Reminder;
    }
    

}

bool IsPalindromNumber(int Number)
{
    
    return ReverseNumber(Number) == Number;
}

int main()
{

    int Number = 0;

    if (IsPalindromNumber(ReadPositiveNumber("\n\nPleas enter a Positive Number: ")))
    {
        cout<<"\nYes it is a Plaindrom Number!";
    }
    else
    {
        cout<<"\nNo is Not a Palindrom Number ";
    }

    return 0;
    
}