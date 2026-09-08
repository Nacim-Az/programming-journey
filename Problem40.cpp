#include<iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout<<Message;
        cin>>Number;

    } while (Number < 0);

    return Number;
}

float DaysToSeconds(int Days)
{
    return ((float)Days*24*60*60);
}

float HoursToSeconds(int Hours)
{

    return ((float)Hours*60*60);

}

float MinutesToSeconds(int Minutes)
{
    return ((float)Minutes*60);
}

float ToSeconds()
{
    float Days = ReadPositiveNumber("\n\nPlease enter The Days: ");
    float Hours = ReadPositiveNumber("\nPleas enter The Number of Hours: ");
    float Minutes = ReadPositiveNumber("\nPlease enter The Minutes: ");
    float Seconds = ReadPositiveNumber("\nPlease enter the seconds: ");

    return (DaysToSeconds(Days) + HoursToSeconds(Hours) + MinutesToSeconds(Minutes) + Seconds);
}

void PrintSeconds()
{
    cout<<"\nThe Total Number of Seconds is: "<<ToSeconds();
}

int main()
{
    PrintSeconds();
}