#include<iostream>
#include<math.h>

using namespace std;

void ReadRectangleInfos(float& A,float& Diagonal)
{
    cout<<"\n\nEnter the Value of one side of the Rectangle: ";
    cin>>A;
    cout<<"\nEnter the Value of  Diagonal: ";
    cin>>Diagonal;
}

float CalculateRectangleAreaBySideAndDiagonal(float A,float Diagonal)
{
    return (A*(sqrt(pow(Diagonal,2) - pow(A,2))));
}

void PrintRectangleArea(float A, float Diagonal)
{
    cout<<"\nThe area of this Rectangle is: "<<CalculateRectangleAreaBySideAndDiagonal(A,Diagonal);
}

int main()
{
    float A,Diagonal;
    ReadRectangleInfos(A,Diagonal);
    PrintRectangleArea(A,Diagonal);
}