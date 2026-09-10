#include<iostream>
using namespace std;

short ReadNumber()
{
    short Number;
    cout<<"Please enter the Number: ";
    cin>>Number;
    return Number;

}

void PrintNumbersFromNto1(short Number)
{
    for (short i = Number ; i >= 1; i--)
    {
        cout<<i<<"\n\n";
    }
    
}

int main()
{
    PrintNumbersFromNto1(ReadNumber());
    return 0;
}