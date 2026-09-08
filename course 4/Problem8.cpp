#include<iostream>
using namespace std;

enum enPassFail{Fail,Pass};

float ReadMark ()
{

    float Mark;
    cout<<"\n\n Please enter your Mark: ";
    cin>>Mark;
    return Mark;

}

enPassFail CheckMark (float Mark)
{
    if(Mark >= 10 )
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintState (enPassFail State)
{
    if (State == enPassFail::Pass)
        
        cout<<"\nCongratulation, you are passed! ";

    else 

        cout<<"\nYou are failed! ";

}

int main()
{
    PrintState(CheckMark(ReadMark()));
    return 0;
}