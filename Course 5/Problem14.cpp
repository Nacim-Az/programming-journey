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
    
}

void PrintInvertedLetter(int Number)
{
    
    for (int  i = 65 + (Number-1); i >= 65 ; i--)
    {

        for (int  j = 1 ; j <= Number - (65 + Number - 1 - i); j++)
        {
            cout<<char(i);
        }
        
        cout<<"\n";
    }
    
}

int main()
{
    PrintInvertedLetter(ReadPositiveNumber("\nPlease enter a Positive Number: "));
    return 0;
}