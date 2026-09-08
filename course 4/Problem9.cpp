#include<iostream>
using namespace std;

struct stSumNumbers
{
    float Number1,Number2,Number3;
};

stSumNumbers ReadNumbers()
{   
    stSumNumbers SumNumbers;
        cout<<"\n\n Please enter the First Number: ";
            cin>>SumNumbers.Number1;
                cout<<"Please enter the second Number: ";
                cin>>SumNumbers.Number2;
            cout<<"Please enter the third Number: ";
        cin>>SumNumbers.Number3;
    return SumNumbers;
}

float calculateSum(stSumNumbers Number)
{
    return (Number.Number1 + Number.Number2 + Number.Number3);
}

void PrintsumNumbers(stSumNumbers Number)
{

    string Result = "The Sum of Numbers: " + to_string(Number.Number1) +" + "+to_string(Number.Number2)+" + "+to_string(Number.Number3)+ " = "+ to_string(calculateSum(Number));
    cout<<"The sum is: "<<Result;
}

int main()
{
    PrintsumNumbers(ReadNumbers());
    return 0;
}