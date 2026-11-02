#include<iostream>
#include<string>

using  namespace std;

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
    for (int  i = 1; i <= Number; i++)
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
    int Number = ReadPositiveNumber("Please enter a Positive Number: ");

    PrintInvertedPattern(Number);
    return 0;
}
