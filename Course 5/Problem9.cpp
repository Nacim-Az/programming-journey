// Review it #############
#include<iostream> 
#include<string>
using namespace std;

int ReadPositveNumber(string Message)
{
    int Number;
    do
    {
        cout<<Message;
        cin>>Number;

    } while (Number <= 0);
    
    return Number;
}


int DigitFrequanceCount(int Number,int DigitToCheck)
{
    int Reminder = 0,CountFreq = 0;

    while (Number > 0)
    {
        Reminder = Number%10;
        Number = Number/10;

        if (Reminder == DigitToCheck)
        {
            CountFreq++;
        }
        
    }

    return CountFreq;
    
}

void PrintAllDigitFrequancy(int Number)
{
    int DigitFrequency = 0;

    for (int i = 0; i < 10; i++)
    {
        DigitFrequency = DigitFrequanceCount(Number,i);

        if (DigitFrequency > 0)
        {
            cout<<"\nThe Frequency of "<<i<<" is "<<DigitFrequency<<" Times(s)\n\n";
        }
        
    }
    
}

int main()
{
    int Number = ReadPositveNumber("\n\nPlease enter The Positive Number: ");
    PrintAllDigitFrequancy(Number);
    return 0;
}