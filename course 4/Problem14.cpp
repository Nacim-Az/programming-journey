#include<iostream>
using namespace std;

void ReadRectangleInfos(int& Width,int& Highet)
{
    cout<<"Please enter the width of the Rectangle: ";
    cin>>Width;
    cout<<"Please enter the highet of the Rectangle: ";
    cin>>Highet;
}

float CalculateRectangleArea(int Width,int Highet)
{
    return (Highet * Width);
}

void PrintRectangleArea(int Width , int Highet)
{
    cout<<"\n\nThe Area of this Rectangle is: "<<CalculateRectangleArea(Width,Highet);

}

int main()
{
    int Width,Highet;
    ReadRectangleInfos(Width,Highet);
    PrintRectangleArea(Width,Highet);
}