#include<iostream>
#include<math.h>
using namespace std;

void ReadBaseAndTriangleSide(float& Base,float& Side)
{
    cout<<"Please enter the Base of this Triaangle: ";
    cin>>Base;
    cout<<"Please enter the Side of this Triangle: ";
    cin>>Side;
}

float CalculateAreaOfCircaleInscribedIcocelesTriangle(float Base, float Side)
{
    const float PI = 3.14;
    float Area = PI*(pow(Base,2)/4)*((2*Side-Base)/(2*Side+Base));
    return Area;
}

void PrintCircleArea(float Base, float Side)
{
    
    cout<<"\n\nThe Area of this Circle is: "<<CalculateAreaOfCircaleInscribedIcocelesTriangle(Base,Side);

}

int main()
{
    float Base, Side;
    ReadBaseAndTriangleSide(Base,Side);
    PrintCircleArea(Base,Side);
}