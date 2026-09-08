#include<iostream>
using namespace std;

enum enDaysOfWeek{Sonntag = 1,Montag = 2,Dienstag = 3,Mittwoch = 4,Donnerstag = 5 ,FreiTag = 6 ,Samstag = 7};

int ReadNumberInRange(string Message,int From,int To)
{
    int Number;
    do
    {
        cout<<Message;
        cin>>Number;

    } while (!(Number >=From && Number <= To));

    return Number;
    
}

string PrintDays(int Day)
{

    enDaysOfWeek Today = (enDaysOfWeek)Day;
    switch (Today)
    {
    case enDaysOfWeek::Sonntag :

        return "\n\nHeute ist Sonntag!";
    
    case enDaysOfWeek::Montag :
        
        return "\n\nHeute ist Monntag!";
    
    case  enDaysOfWeek::Dienstag :
        
        return "\n\nHeute ist Dienstag!";

    case enDaysOfWeek::Mittwoch :
        
        return "\n\nHeute ist Mittwoch!";

    case enDaysOfWeek::Donnerstag :
        
        return "\n\nHeute ist Donnerstag!";

    case enDaysOfWeek::FreiTag :

        return "\n\nHeute ist freitag!";

    case enDaysOfWeek::Samstag :

        return "\n\nHeute ist Samstag!";

    }
}

int main()
{
    int Day = ReadNumberInRange("\n\nPlease Enter The Number of day: ",1,7);
    cout<<PrintDays(Day);
    return 0;
}
