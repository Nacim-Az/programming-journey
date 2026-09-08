#include<iostream>
using namespace std;

enum enMonths{Januar = 1,Februar = 2,Marz = 3,April = 4,Mai = 5,
             Juni = 6,Juli = 7,August = 8,September = 9,Oktober = 10,
             November = 11,Dezember = 12};

int ReadNumberInRange(string Message, int From, int To)
{
    int Number;
    do
    {
        cout<<Message;
        cin>>Number;

    } while (Number < From || Number > To);

    return Number;
    
}

enMonths GetMonthNumber()
{
    
    return (enMonths)ReadNumberInRange("\n\nPlease enter the Number Of Month: ",1,12);
}

string PrintMonth(enMonths Month)
{
    switch (Month)
    {
    case enMonths::Januar:

        return "Januar";

    case enMonths::Februar:

        return "Februar";

    case enMonths::Marz:
        
        return "März";

    case enMonths::April:

        return "April";

    case enMonths::Mai:

        return "Mai";

    case enMonths::Juni:
        
        return "Juni";

    case enMonths::Juli:

        return "Juli";

    case enMonths::August:

        return "August";

    case enMonths::September:

        return "september";

    case enMonths::Oktober:

        return "Oktober";

    case enMonths::November:
        
        return "November";

    case enMonths::Dezember:

        return "Dezember";

    }
}

int main()
{
    cout<<PrintMonth(GetMonthNumber());
    return 0;
}
