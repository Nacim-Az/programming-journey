#include<iostream>
#include<math.h>
using namespace std;

float ReadL()
{
    float L;
    cout<<"\n\nPlease enter the L: ";
    cin>>L;
    return L;
}

float CalculateCircleArea(float L)
{
    const float PI = 3.14;
    return (pow(L,2)/(4*PI));
}

void PrintArea(float L)
{
    cout<<"\n\nThe Area of this circle is: "<<CalculateCircleArea(L);
}

int main()
{
    PrintArea(ReadL());
    return 0;
}