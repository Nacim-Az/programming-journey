#include<iostream>
using namespace std;

float ReadNumber(string Message)
{

    float Number;
    cout<<Message;
    cin>>Number;
    return Number;

}

float SumNumbersUntil()
{
    float Sum = 0, Number = 0;
    int Counter = 1;

    do
    {       
           
            Sum += Number; 
            Number = ReadNumber("Please enter a Number "+to_string(Counter)+": ");

    } while(Number != -99);

    return Sum;
    
}

void PrintResult()
{
    cout<<"Result = "<<SumNumbersUntil();
}
int main()
{
    PrintResult();
}