#include<iostream>
#include<windows.h>
using namespace std;

int ReadPositiveNumber(int& Number,string Message)
{
    do{
    cout<<Message;
    cin>>Number;
    }while(Number < 0);
    return Number;
}

int CalculFactorielWithForLoop(int Number)
{
    int Factoriel = 1;
    for (int i = Number; i >= 1; i--)
    {
        Factoriel *= i ;
    }
    
    return Factoriel;

}

int CalculFactorielWithWhileLoop(int Number)
{   
    int Factoriel = 1;
    int Count = Number;

    while (Count >= 1)
    {

        Factoriel *=Count;
        Count--;

    }
    
    return Factoriel;
}

int CalculFactorielWithDoWhileLoop(int Number)
{
    int Factoriel = 1;
    int Count = Number;

    do
    {
        Factoriel *= Count;
        Count--;

    } while (Count >= 1);
    
}

void PrintFactoriel(int Factoriel,int Number)
{
    cout<<"\n\nThe Factorial of the Number "<<Number<<" is : "<<Factoriel<<endl;
    system("color 3F");
    Beep(1000,500);
}

int main()
{
    int Number;
    ReadPositiveNumber(Number,"Enter a Positive Number: ");
    PrintFactoriel(CalculFactorielWithForLoop(Number),Number);
    PrintFactoriel(CalculFactorielWithDoWhileLoop(Number),Number);
    PrintFactoriel(CalculFactorielWithWhileLoop(Number),Number);
    return 0;
}