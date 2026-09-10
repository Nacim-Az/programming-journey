#include<iostream>
#include<math.h>
using namespace std;

void ReadTriangleInfos(float& Base,float& SideA,float& SideB)
{
    cout<<"\n\nPlease enter the Base of this Triangle: ";
    cin>>Base;
    cout<<"\nPlease enter the Side A of this Triangle: ";
    cin>>SideA;
    cout<<"\nPlease enter the Side B of this Triangle: ";
    cin>>SideB;

}

float CalculateCircleAreaescribedAATriangle(float Base, float SideA, float SideB)
{
    const float P = (Base + SideA + SideB)/2;
    const float PI = 3.14;
    float Area = PI*pow(((Base * SideA * SideB)/(4*sqrt(P*(P - SideA)*(P - SideB)*(P - Base)))),2);
    return Area;

}

void PrintArea(float Base, float SideA, float SideB)
{
    cout<<"\n\nThe Area of this Circle is: "<<CalculateCircleAreaescribedAATriangle(Base,SideA,SideB);
    
}

int main()
{
    float Base,SideA,SideB;
    ReadTriangleInfos(Base,SideA,SideB);
    PrintArea(Base,SideA,SideB);
    return 0;
    
}