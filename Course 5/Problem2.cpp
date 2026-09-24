#include<iostream>
#include<math.h>
using namespace std;



enum enPrimeNotPrime {Prime = 1, NotPrime = 2};

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout<<Message;
        cin>>Number;

    } while (Number <= 0);
    
    return Number;
}

enPrimeNotPrime CheckPrime(int Number)
{
    
    int Limit = round(Number/2);

    for (int i = 2; i <= Limit; i++)
    {
        if (Number%i == 0)
        {
            return enPrimeNotPrime::NotPrime;
        }    
    }    

    return enPrimeNotPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN()
{
    int Number = ReadPositiveNumber("Please enter a Positive Number: "); 
    
    cout<<"\n";
    cout<<"Print Prime Numbers from "<<1<<" To "<<Number;
    cout<<" are : "<<endl;

    for (short i = 1; i <= Number; i++)
    {
        if (CheckPrime(i) == enPrimeNotPrime::Prime)
        {
            cout<<i<<endl;
        }
        
    }
    
    
}

int main()
{
    PrintPrimeNumbersFrom1ToN();
    return 0;
}

