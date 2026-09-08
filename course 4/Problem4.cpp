#include<iostream>
using namespace std;

struct stPersonInfos
{
    short Age;
    bool Driver_license;
    bool Recomendation;
};

stPersonInfos ReadPersonInfos(){

    stPersonInfos Person;
    cout<<" ________________________________ \n";
    cout<<"| Welcom To our Hiring Programme |"<<endl;
    cout<<" -------------------------------- \n\n";
    cout<<"\n Please enter your Age: ";
    cin>>Person.Age;

    do{

        cout<<"\n Please enter \"1\" if you have a driving license or \"0\" if not. ";
        cin>>Person.Driver_license;

    }while((Person.Driver_license != 0 ) && ( Person.Driver_license != 1));

    do
    {
        cout<<"\n Please enter \"1\" if you have a recomendation or \"0\" if not.";
        cin>>Person.Recomendation;

    }while((Person.Driver_license != 0 ) && ( Person.Driver_license != 1));

    return Person;
}

bool CheckPersonState(stPersonInfos Person){

 return (Person.Age > 21 && Person.Driver_license  || Person.Recomendation );
 
}

void PrintPersonState(stPersonInfos Person){

    if (CheckPersonState(Person))
    {
        cout<<"\n Congratulation, you are Hiered! ";
    }
    else
    {
        cout<<"\n You are rejected! ";
    }
    
}

int main(){

    PrintPersonState(ReadPersonInfos());
    return 0;
}