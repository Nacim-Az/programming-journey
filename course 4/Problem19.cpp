#include<iostream>
#include<math.h>
using namespace std;

float ReadSideA()
{
    float A;
    cout<<"\n\nPlease enter A: ";
    cin>>A;
    return A;
}

float ClculateCircleAreaInscribedInSquare(float A)
{
    const float PI = 3.14;
    float Area = (PI*pow(A,2))/4;
    return Area;

}

void PrintCircleArea(float Area)
{
    cout<<"\n\nThe Area of this circle is: "<<Area;
}

int main()
{
    PrintCircleArea(ClculateCircleAreaInscribedInSquare(ReadSideA()));
    return 0;

}