#include<iostream>
using namespace std;

struct stPayment
{
    float TotalBill,CashPaid,Remainder;
};

float ReadNumber(string Message)
{   
    float Number;
        cout<<Message;
        cin>>Number;
    return Number;
}

float CalculSabstraction(float Number1,float Number2)
{
    return Number1 - Number2;
}

void PrintResult(float Number1,float Number2)
{
    cout<<"\n\nYour Remainder is: "<<CalculSabstraction(Number1,Number2);
}

int main()
{
    float TotalBill = ReadNumber("\n\nPlease enter the Total Bill: ");
    float CashPaid = ReadNumber("\nPlease enter the Cash Paid: ");
    PrintResult(CashPaid,TotalBill);
}