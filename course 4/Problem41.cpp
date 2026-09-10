#include<iostream>
#include<math.h>
using namespace std;

struct stTaskDuration
{
    int NumberOfSeconds,NumberOfMinutes,NumberOfhours,NumberOfDays;
};


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

stTaskDuration CalculTaskDuration(int Seconds)
{
    stTaskDuration TaskDuration;

    TaskDuration.NumberOfSeconds = Seconds % 60;
    TaskDuration.NumberOfMinutes = Seconds / 60;

    TaskDuration.NumberOfhours = TaskDuration.NumberOfMinutes / 60;
    TaskDuration.NumberOfMinutes = TaskDuration.NumberOfMinutes % 60;

    TaskDuration.NumberOfDays = TaskDuration.NumberOfhours / 24;
    TaskDuration.NumberOfhours = TaskDuration.NumberOfhours % 24;

    return TaskDuration;

}

stTaskDuration CalculTaskDuration_Solution(int Seconds) //this is the methode of the teacher
{
    stTaskDuration TaskDuration;
    const int SecondsPerDay = 24 * 60 * 60 ;
    const int SecondsPerHour = 60 * 60 ;
    const int SecondsPerMinute = 60 ;

    int Reminder = 0;

    TaskDuration.NumberOfDays = floor(Seconds / SecondsPerDay);
    Reminder = Seconds % SecondsPerDay;

    TaskDuration.NumberOfhours = floor(Reminder / SecondsPerHour);
    Reminder = Reminder % SecondsPerHour;

    TaskDuration.NumberOfMinutes = floor(Reminder / SecondsPerMinute);
    Reminder = Reminder % SecondsPerMinute;

    TaskDuration.NumberOfSeconds = Reminder;

    return TaskDuration;
}

void PrintTaskDuration(int Seconds)
{

    stTaskDuration TaskDuration1 = CalculTaskDuration(Seconds);
    system("color 2F");
    cout<<"\n\nThe Result is: "<<TaskDuration1.NumberOfDays<<" : "
                                <<TaskDuration1.NumberOfhours<<" : "
                                <<TaskDuration1.NumberOfMinutes<<" : "
                                <<TaskDuration1.NumberOfSeconds<<endl;
    
    stTaskDuration TaskDuration2 = CalculTaskDuration_Solution(Seconds);
    system("color 1F");
    cout<<"\n\nThe Result is: "<<TaskDuration2.NumberOfDays<<" : "
                               <<TaskDuration2.NumberOfhours<<" : "
                               <<TaskDuration2.NumberOfMinutes<<" : "
                               <<TaskDuration2.NumberOfSeconds<<endl;
}

int main()
{
    int Seconds = ReadPositiveNumber("\n\nPlease enter the Number Of Seconds: ");
    
    PrintTaskDuration(Seconds);
}