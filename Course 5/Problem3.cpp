#include<iostream>
#include<string>
#include<math.h>
using namespace std;


int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout<<Message;
        cin>>Number;

    } while (Number < 0);

    return Number;
    
}

bool IsPerfectNumber(int Number) //you can do it with bool idea or enum and try to name every bool function with IsSomthing as yes no question
{   

    int Sum = 1;
    int Limit = round(Number/2);

    for (short i = 2; i <= Limit; i++)
    {
        if(Number%i == 0)
            Sum += i;
        
    }

    return Number == Sum;
    
}

void PrintIfPerfectNumber(int Number)
{
    if (!IsPerfectNumber(Number))
    {
        system("color 4F");
        cout<<"\n\nThis Number "<<Number<<" is not Perfect!";
    }else
    {
        system("color 2F");
        cout<<"\n\nThis Number "<<Number<<" is Perfect!";
    }
}

int main()
{
   PrintIfPerfectNumber(ReadPositiveNumber("\n\nPlease enter a Positive Number: "));
   return 0;
}