#include<iostream>
#include<string>
#include<math.h>
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

bool IsPerfectNumber(int Number)
{

    int Limit = round(Number/2);
    int Sum = 0;

    for (short i = 1; i <= Limit ; i++)
    {
        if(Number%i == 0)
            Sum += i;
    }
    
    return Number == Sum;
}

void PrintPerfectNumbersFrom1ToN(int Number)
{

    for (int i = 1; i <= Number ; i++)
    {
        if (IsPerfectNumber(i))
        {
            cout<<i<<endl;
        }
        
    }
    
}

int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("\n\nPlease enter the Positive Number N: "));

    return 0;
}

