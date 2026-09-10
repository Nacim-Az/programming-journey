#include<iostream>
using namespace std;

struct stMoney
{
    float Pennies,Nickles,Dimes,Quarters,Dollars;
};

stMoney ReadMoneyInfos()
{   
    stMoney Money;
    cout<<"\n\nEnter Pennies: ";
    cin>>Money.Pennies;
    cout<<"Enter Nickles: ";
    cin>>Money.Nickles;
    cout<<"Enter Dimes: ";
    cin>>Money.Dimes;
    cout<<"Enter Quarters: ";
    cin>>Money.Quarters;
    cout<<"Enter Dollars: ";
    cin>>Money.Dollars;

    return Money;

}

float CalculatePennies(stMoney Money)
{
    float Pennies = 0;

    Pennies = Money.Pennies + Money.Nickles*5 + Money.Dimes*10 +Money.Quarters*25 + Money.Dollars*100;

    return Pennies;
}

float CalculateDollars(float Pennies)
{
    return (Pennies/100);
}

void PrintPennies(float Pennies)
{
    cout<<"\nYou have "<<Pennies<<" Pennies.\n\n";
}

void PrintDollars(float Dollars)
{

    cout<<"\nYou have "<<Dollars<<" Dollars.\n\n";

}

int main()
{
    float Pennies = CalculatePennies(ReadMoneyInfos());
    float Dollars = CalculateDollars(Pennies);
    PrintPennies(Pennies);
    PrintDollars(Dollars);

}