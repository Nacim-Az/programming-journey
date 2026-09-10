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


float CalculMonthlyInstallment(float LoanAmount,float Months)
{
    return round((float)(LoanAmount / Months));
}

int main()
{
    float LoanAmount = ReadPostiveNumber("\n\nPlease enter The Loan Amount: ");
    float Months = ReadPostiveNumber("\nPlease enter How many Months:  ");

    cout<<"You need "<<CalculMonthlyInstallment(LoanAmount,Months)<<" installment Amount.";

    return 0;
}
