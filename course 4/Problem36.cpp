#include<iostream>
#include<math.h>
using namespace std;
enum enPrimeOrNot{Prime = 1,NotPrime = 2};

int ReadNumber(string message)
{

    float Number;
        cout<<message;
        cin>>Number;
    return Number;

}
enPrimeOrNot PrimeCalcul(int Number)
{
   
    int Limit = round(Number/2);

    for (int i = 2; i < Limit ; i++)
    {
        if (Number%i == 0)
        {
            return enPrimeOrNot::NotPrime;
            
        }
        
    }
        return enPrimeOrNot::Prime;

}

void PrintResult(int Number)
{
    enPrimeOrNot NumberType = PrimeCalcul(Number);

    if (NumberType == enPrimeOrNot::Prime)
    {
        cout<<"The Number "<<Number<<" is Prime!";

    }else if (NumberType == enPrimeOrNot::NotPrime)
    {
        cout<<"The Number "<<Number<<" is Not Prime!";
    }
    
}

int main()
{
    PrintResult(ReadNumber("\n\nPlease enter a Number: "));
}