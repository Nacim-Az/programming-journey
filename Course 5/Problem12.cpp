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


void PrintInvertedPattern(int Number)
{

    for (int  i = Number; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<i;
        }
        
        cout<<"\n";
    }
    
}

int main()
{
    int Number = 0;
    PrintInvertedPattern(ReadPositiveNumber("\n\nPlease enter a Positive Number: "));
    return 0;
}