#include<iostream>
using namespace std;

bool NumberInRange(float Number,float From, float To)
{
    return (Number >= From && Number <= To);
}

short ReadAge()
{
    short Age;

    
        cout<<"\n\nEnter an Age that must be between 18 and 45: ";
        cin>>Age;

    return Age;
    
}

short ReadAgeUntilbetween(float From, float To)
{
    short Age =  0;
    do
    {
        Age = ReadAge();

    } while (!NumberInRange(Age,From,To));
    
    return Age;
}

void PrintResults(short Age)
{
    cout<<"Your Age is: "<<Age;
}

int main()
{
    PrintResults(ReadAgeUntilbetween(18,45));
    return 0;
}
