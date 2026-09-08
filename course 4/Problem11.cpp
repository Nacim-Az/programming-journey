#include<iostream>
using namespace std;

void ReadNumbers(int& Number1, int& Number2)
{
    do
    {
        cout<<"\n\n Make sure you enter deffirent numbers";  
    cout<<"\n Please enter the First number: ";
        cin>>Number1;
    cout<<"\n Please enter the Second number: ";
        cin>>Number2;
    }while(Number1 == Number2);
}

int CalculateMax(int& Number1, int& Number2)
{
    if(Number1 > Number2)
    {

        return Number1;

    }else
    {
        return Number2;

    }
}

void PrintMax(int Number1,int Number2)
{ 
    cout<<"\n\n The max of the two numbers is : "<<CalculateMax(Number1,Number2);
}

int main()
{
    int Number1,Number2;
        ReadNumbers(Number1,Number2);
        PrintMax(Number1,Number2);
    return 0;
}