#include<iostream>
using namespace std;

string ReadPinCode(string Message)
{
    string PinCode;
    cout<<Message;
    cin>>Message;
    return Message;

}

bool Login()
{
    short counter = 3;
    string PinCode ;
    do
    {
        PinCode = ReadPinCode("Please enter the Pin Code: ");
        counter--;
        if (PinCode == "1234")
        {
            return 1;
        }else
        {
            system("color 4F");
            cout<<"\n\nWrong Pin! Still have just "<<counter<<"tries.\n";
        }
        
    } while (counter >= 1 && PinCode != "1234");

        return 0;
    
}

int main()
{
    if (Login())
    {
        system("color 2F");
        cout<<"\nYour Balance is 7500";
        cout<<endl;
    }else
    {
        system("color 4F");
        cout<<"Your Card is Banned! ,Call Bank For Help !";
    }
    
    
}