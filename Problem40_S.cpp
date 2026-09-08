#include<iostream>
using namespace std;

struct stTaskDuration
{
    int NumberOfDays,NumberOfHours,NumberOfMinutes,NumberOfSeconds;
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

int TaskDurationInSeconds()
{   
    stTaskDuration Task;
    
    Task.NumberOfDays = ReadPositiveNumber("\n\nPlease enter The Number Of Days: ");
    Task.NumberOfHours = ReadPositiveNumber("\nPlease enter The Number Of Hours: ");
    Task.NumberOfMinutes = ReadPositiveNumber("\nPlease enter The Number Of Minutes: ");
    Task.NumberOfSeconds = ReadPositiveNumber("\nPlease enter The Number Of seconds: ");

    int TaskdurationSC = 0;

    TaskdurationSC += (Task.NumberOfDays *24*60*60);
    TaskdurationSC += (Task.NumberOfHours *60*60);
    TaskdurationSC += (Task.NumberOfMinutes *60);
    TaskdurationSC += Task.NumberOfSeconds;

    return TaskdurationSC;
    
}

int main()
{
    cout<<"The Task Duration In Seconds: "<<TaskDurationInSeconds();
    return 0;
}