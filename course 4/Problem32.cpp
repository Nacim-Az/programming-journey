#include<iostream>
using namespace std;

float ReadTheSalle()
{
    float salle;
    cout<<"\n\nHow much is your salle ?\n";
    cin>>salle;
    return salle;

}

float CalculateComission(float Salle,float Percentage)
{
    
    return (Salle*Percentage);

}

float GetPercentage(float Salle)
{
    if (Salle >= 1000000)
    {
        return 0.01;

    }else if (Salle >= 5000000)
    {
        return 0.02;

    }else if (Salle >= 100000)
    {
        return 0.03; 

    }else if (Salle >= 50000)
    {
        return 0.05;
    }else
    {
        return 0;
    }
    
    
}

float CheckComissionOperation(float Salle,float Percentage)
{
    if (Salle >= 1000000)
    {
       return CalculateComission(Salle,Percentage);

    }else if (Salle >= 500000)
    {
       return CalculateComission(Salle,Percentage);

    }else if (Salle >= 100000)
    {
        return CalculateComission(Salle,Percentage);

    }else if (Salle >= 50000)
    {
        return CalculateComission(Salle,Percentage);
    }else
    {
        return 0;
    }
    
}

void PrintComission()
{
    float Salle = ReadTheSalle();
    float Percentage = GetPercentage(Salle);
    cout<<"Your Comission is: "<<CheckComissionOperation(Salle,Percentage);
}

int main()
{
    PrintComission();
}