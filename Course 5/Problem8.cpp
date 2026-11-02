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

int CountDigitFrequancy(int Number,int DigitToCheck)
{
    int Reminder = 0,FreqCount = 0;

    while (Number > 0)
    {
        Reminder = Number%10;
        Number = Number/10;

        if (Reminder == DigitToCheck)
        {

            FreqCount++;

        }

    }

    return FreqCount;
    
    
}

int main()
{
    int Number = ReadPositiveNumber("\n\nPlease enter a Number: ");
    int Digit = ReadPositiveNumber("\nPlease enter a Digit: ");

    

    cout<<"\n\n the Frequancy of the Digit "<<Number<<" is "
    <<CountDigitFrequancy(Number,Digit);
    return 0;
}
