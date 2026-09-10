#include<iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number;
    do
    {
        cout<<Message;
        cin>>Number;

    } while (Number < 0);

    return Number;
}

float CalculServiceFee(float BillValue)
{
    float ServiceFee = BillValue * 0.16;

    return ServiceFee;
}

float CalculSalesTax(float BillValue)
{
    float SaleTax = BillValue * 0.1;

    return SaleTax;
}

float CalculTotalBill(float BillValue)
{
    float TotalBill = BillValue + CalculSalesTax(BillValue) + CalculServiceFee(BillValue);
    
    return TotalBill;
}

void PrintTotalBill(float BillValue)
{
    cout<<"The Total Bill After Adding Sale Tax and Service Fee is: "<<CalculTotalBill(BillValue);
}

int main()
{

    PrintTotalBill(ReadPositiveNumber("\n\nPlease enter the Bill value: "));
    
}