#include<iostream>
using namespace std;

short ReadNumber()
{
    short Number;
    cout<<"Please enter the number : ";
    cin>>Number;
    return Number;

}

void PrintNumberFrom1ToN1(short Number)
{
    for (short i = 1; i <= Number; i++)
    {
        cout<<i<<"\n";
    }
    
}

void PrintNumberFrom1ToN2(short Number)
{
    short i = 1;
    while (i <= Number)
    {
        cout<<i<<"\n";
        i++;
    }
    
}

void PrintNumberFrom1ToN3(short Number)
{
    short i = 1;
    do
     {
        cout<<i<<"\n";
        i++;
     } while (i <= Number);
    
}

int main()
{
    PrintNumberFrom1ToN1(ReadNumber());
    PrintNumberFrom1ToN2(ReadNumber());
    PrintNumberFrom1ToN3(ReadNumber());
    return 0;
}