#include<iostream>
using namespace std;

int ReadNumber()
{   
    int Number;
    cout<<"\n\n Please enter a Number: ";
    cin>>Number;
    return Number;
}

int CalculatePower(int Number,int Power)
{
    int result = 1;
    for (int i = 0; i < Power ; i++)
    {
        result *= Number; 
    }
    
    return result;
}

void PrintResults(int Number)
{
    cout<<"\n\n"<<Number<<" ^ "<<" 2 = "<<CalculatePower(Number,2);
    cout<<"\n\n"<<Number<<" ^ "<<" 3 = "<<CalculatePower(Number,3);
    cout<<"\n\n"<<Number<<" ^ "<<" 4 = "<<CalculatePower(Number,4);

}

int main()
{
    PrintResults(ReadNumber());
}