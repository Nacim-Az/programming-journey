#include<iostream>
using namespace std;

int ReadNumberInRange(int From, int To)
{
    int Number;
    do
    {
        cout<<"Please enter a Number between "<<From<<" And "<<To<<" : ";
        cin>>Number;

    } while (!Number >= From && Number <= To);
    
}

char GetGradeLetter(int Grade)
{
    if (Grade >= 90)
    {
        return 'A';

    }else if (Grade >= 80)
    {
        return 'B';

    }else if (Grade >= 70)
    {
        return 'C';

    }else if (Grade >= 60)
    {
        return 'D';

    }else if (Grade >= 50)
    {
        return 'E';

    }else 
    {
        return 'F';
    }
    
}

void PrintGradeLetter()
{
    cout<<endl<<"The Gread Letter is: "<<GetGradeLetter(ReadNumberInRange(1,100));
}

int main()
{
    PrintGradeLetter();
}