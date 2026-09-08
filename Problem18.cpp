#include<iostream>
#include<math.h>
using namespace std;

void ReadCircaleDiameter(float& Diameter)
{
    cout<<"\n\nPlease enter the Diameter of this triangle: ";
    cin>>Diameter;
}

float CalculateCircleAreaByDiameter(float Diameter, float PI)
{
    return ((PI*pow(Diameter,2))/4);
}

void PrintCircleArea(float Diameter,float PI)
{
    cout<<"\n\nThe Area of this circle is:  "<<CalculateCircleAreaByDiameter(Diameter,PI);

}

int main()
{
    float Diameter;
    const float PI = 3.14;
    ReadCircaleDiameter(Diameter);
    PrintCircleArea(Diameter,PI);
    return 0;
}