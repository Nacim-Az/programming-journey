#include<iostream>
using namespace std;

enum enPassFail{Fail,Pass};

void ReadMarks(float& Mark1,float& Mark2,float& Mark3)
{
    cout<<"\nPlease enter the first Mark: ";
        cin>>Mark1;
            cout<<"\nplease enter the second Mark: ";
            cin>>Mark2;
        cout<<"\nPlease enter the third Mark: ";
    cin>>Mark3;
}

float CalculateSum(float& Mark1,float& Mark2,float& Mark3)
{
    return(Mark1 + Mark2 + Mark3);
}

float CalculateAvreg(float Sum)
{
    return (Sum/3);
}

enPassFail CheckState(float Avreg)
{

    if(Avreg >= 10)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;

}

void PrintState(float Avreg)
{

    if( CheckState(Avreg) == enPassFail::Pass)
        cout<<"\n\nCongratulation, you are Passed!";
    else
        cout<<"\n\nYou are failed!";
}

void PrintAvreg(float Avreg) 
{
    cout<<"\n\n The Avreg of the three marks are: "<<Avreg;
}

int main()
{
    float Mark1,Mark2,Mark3;

        ReadMarks(Mark1,Mark2,Mark3);
        float Avreg = CalculateAvreg(CalculateSum(Mark1,Mark2,Mark3));
        PrintAvreg(Avreg);
        PrintState(Avreg);
        
    return 0;
}