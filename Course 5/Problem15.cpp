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

void PrintLetters(int Number)
{
    for (int  i = 65; i <= 65 + (Number-1); i++)
    {
        for (int j = 1; j <= i - 65 +1; j++)
        {
            cout<<char(i);
        }
        
        cout<<"\n";
    }
    
}

int main()
{
    PrintLetters(ReadPositiveNumber("\nPlease enter a Positive Number: "));
    return 0;
}