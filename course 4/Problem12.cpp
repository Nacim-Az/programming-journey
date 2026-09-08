#include<iostream>
using namespace std;

void ReadNumbers(int& Number1,int& Number2,int& Number3)
{
    cout<<"\n\n Please enter the first number: ";
        cin>>Number1;
            cout<<"\n Please enter the second number: ";
            cin>>Number2;
        cout<<"\n Please enter the third number: ";
    cin>>Number3;
}

int MaxOfTwoNumbers(int Number1,int Number2)
{
    if(Number1 > Number2)
        return Number1;
    else
        return Number2;

}

int MaxOfThreeNumbers(int Number1,int Number2,int Number3)
{

    //methode 1 --> //return MaxOfTwoNumbers(MaxOfTwoNumbers(Number1,Number2),Number3);

    if(Number1 > Number2)
        if(Number1 > Number3)
            return Number1;
        else
            return Number3;
    else
        if(Number2 > Number3)
            return Number2;
        else
            return Number3;

}

void PrintMaxThreeNumbers(int Number1,int Number2,int Number3)
{
    cout<<"\n\n The Max of the three numbers is: "<<MaxOfThreeNumbers(Number1,Number2,Number3);
}

int main()
{
    int Number1,Number2,Number3;
    ReadNumbers(Number1,Number2,Number3);
    PrintMaxThreeNumbers(Number1,Number2,Number3);
}