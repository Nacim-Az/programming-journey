#include<iostream>
using namespace std;

void ReadInfos(int& Number, int& Power)
{
    cout<<"\n\nPlease enter The Number : ";
    cin>>Number;
    cout<<"\nPlease enter The Power :  ";
    cin>>Power;
}

int CalculatePower(int Number, int Power)
{

    if (Power == 0)
    {
        return 1;
    }
    


    int Result = 1;
    for (int i = 0; i < Power; i++)
    {
        Result *= Number;
    }
    
    return Result;
}

void PrintTheResult(int Number, int Power)
{

    cout<<Number<<" ^ "<<Power<<" = "<<CalculatePower(Number,Power);

}

int main()
{
    int Number,Power;
    ReadInfos(Number,Power);
    PrintTheResult(Number,Power);

}