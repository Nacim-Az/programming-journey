#include<iostream>
using namespace std;

void ReadTwoNumbers(int& Number1,int& Number2)
{
    cout<<"\n\n This is a swiping programme.\n";
        cout<<"Please enter the two numbers you want to swap.\n\n";
            cout<<"The First number: ";
            cin>>Number1;
        cout<<"The Second Number: ";
    cin>>Number2;
}

void SwapTwoNumbers(int& Number1, int& Number2)
{
    int Tmp;
    Tmp = Number1;
    Number1 = Number2;
    Number2 = Tmp;
}

void PrintTheswipedNumbers(int Number1, int Number2)
{
    cout<<"Number 1: "<<Number1<<endl;
    cout<<"Number 2: "<<Number2<<endl;
}

int main()
{

    int Number1,Number2;
    ReadTwoNumbers(Number1,Number2);
    SwapTwoNumbers(Number1,Number2);
    PrintTheswipedNumbers(Number1,Number2);

}