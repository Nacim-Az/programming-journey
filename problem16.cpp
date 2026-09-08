#include<iostream>
using namespace std;

void ReadTriangleInfos(float& highet,float& Base)
{
    cout<<"Please enter the Triangle Highet: ";
    cin>>highet;
    cout<<"Please enter the Triangle Base: ";
    cin>>Base;
}

float CalculateTriangleAreaByHighetAndBase(float Highet, float Base)
{
    return (Base*Highet/2);
}

void PrintTriangleArea(float Highet, float Base)
{
    cout<<"\n\nThe Area of this Triangle is: "<<CalculateTriangleAreaByHighetAndBase(Highet,Base);
}

int main()
{
    float Highet,Base;
    ReadTriangleInfos(Highet,Base);
    PrintTriangleArea(Highet,Base);
    return 0;
}