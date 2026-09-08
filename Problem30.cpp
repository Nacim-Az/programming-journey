#include<iostream>
using namespace std;

enum enNotesGrades{A,B,C,D,E,F};

float ReadGrade()
{   
    float Grade;
    cout<<"\n\n Please enter the Grade: ";
    cin>>Grade;
    return Grade;

}

enNotesGrades CheckNote(float Grade)
{
    if (Grade >= 90 && Grade <= 100)
    {
        return enNotesGrades::A;

    }else if(Grade >= 80 && Grade <= 89)
    {
        return enNotesGrades::B;
    }else if (Grade >= 70 && Grade <=79)
    {
        return enNotesGrades::C;

    }else if (Grade >= 60 && Grade <= 69)
    {
        return enNotesGrades::D;


    }else if (Grade >= 50 && Grade <= 59)
    {
        return enNotesGrades::E;
    }else
    {
        return enNotesGrades::F;
    }
    
}

void PrintNoteGrade(enNotesGrades GradeNote)
{
    switch (GradeNote)
    {
    case enNotesGrades::A :
        
        cout<<"Your Note is: A";
        break;

    case enNotesGrades::B :

        cout<<"Your Note is: B";
        break;

    case enNotesGrades::C :
        
        cout<<"Your Note is: C";
        break;
    
    case enNotesGrades::D :

        cout<<"Your Note is: D";
        break;

    case enNotesGrades::E :
    
        cout<<"Your Note is: E";
        break;

    case enNotesGrades::F :

        cout<<"Your Note is: F";
        break;
    }
}

int main()
{
    PrintNoteGrade(CheckNote(ReadGrade()));
}