#include<iostream>
#include<math.h>

using namespace std;

void ReadCircleRadious(float& R)
{
    cout<<"\n\nPlease Enter the R: ";
    cin>>R;
}

float CalculateCircleArea(float R, float P)
{
    return (P*pow(R,2));
}

void PrintCircleArea(float R, float P)
{
    cout<<"\n\nThe Area of this Circle is: "<<CalculateCircleArea(R,P);
}

int main()
{
    float R;
    const float P = 3.14;
    ReadCircleRadious(R);
    PrintCircleArea(R,P);
}