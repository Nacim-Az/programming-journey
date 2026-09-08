#include<iostream>
using namespace std;

enum enOperationType{Addition = '+',Sabstraction = '-', Devision = '/', Multiplication = '*'};

float ReadNumber(string message)
{
    float Number;
    cout<<message<<endl;
    cin>>Number;
    return Number;
}

enOperationType ReadOperationType()
{
    char OT;
    cout<<"\nPlease enter the operation type: ";
    cin>>OT;
    return (enOperationType)OT; //important idea about enums
}

float Calculate(float Number1,float Number2,enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Addition:
        
        return (Number1 + Number2);

    case enOperationType::Devision:
        
        return (Number1 / Number2);
    
    case enOperationType::Multiplication:
        
        return (Number1 * Number2);

    case enOperationType::Sabstraction:

        return (Number1 - Number2);
        
    }
}

int main()
{
    float Number1 = ReadNumber("\nPlease enter the first Number: ");
    float Number2 = ReadNumber("\nPlease enter the second Number: ");

    enOperationType Optype = ReadOperationType();

    cout<<endl<<"Result = "<<Calculate(Number1,Number2,Optype);
}


