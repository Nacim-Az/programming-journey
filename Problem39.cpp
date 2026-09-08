#include<iostream>
#include<math.h>

using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number;

    do{

    cout<<Message;
    cin>>Number;

    }while(Number < 0);
    return Number;
}

int HoursToDays(float Hours)
{
    return ((float)Hours/24);
}

float HoursToWeeks(float Hours)
{
    return ((float)Hours/24/7);
}

float DaysToWeeks(float Days)
{
    return ((float)Days/7);
}

void PrintDaysWeeks(float Hours)
{
    float Days = HoursToDays(Hours);
    float Weeks = HoursToWeeks(Hours);
    float Totalweeks = DaysToWeeks(Days);

    cout<<"\n\nThere is "<<Days<<" Days.\n";
    cout<<"There is "<<Weeks<<" Weeks.\n";
    cout<<"Total weeks From Days: "<<Totalweeks<<" weeks";

}

int main()
{
    PrintDaysWeeks(ReadPositiveNumber("\n\nPlease enter The Number Of Hours: "));
    return 0;
    
}