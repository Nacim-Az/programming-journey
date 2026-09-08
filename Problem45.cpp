#include<iostream>
#include<math.h>
using namespace std;

float ReadPostiveNumber(string Message)
{
    float Number;
    do
    {
        cout<<Message;
        cin>>Number;

    } while (Number < 0);
    
    return Number;
}


float CalculMonthsToSettleLoan(float LoanAmount,float MonthlyPaiment)
{
    return round(LoanAmount / MonthlyPaiment);
}

int main()
{
    float LoanAmount = ReadPostiveNumber("\n\nPlease enter The Loan Amount: ");
    float Monthlypaiment = ReadPostiveNumber("\nPlease enter The paiment: ");

    cout<<"You need "<<CalculMonthsToSettleLoan(LoanAmount,Monthlypaiment)<<" MONTHS.";

    return 0;
}
