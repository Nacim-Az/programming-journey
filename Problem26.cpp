#include<iostream>
#include<windows.h>
using namespace std;

enum enOddOrEven {Odd,Even};
enum enCheckOperation {OpOdd,OpEven,OpAll,Opfalse};

int ReadNumberMaxOfRange()
{   
    int Number;
    cout<<"Please enter the Number Max of The Range: ";
    cin>>Number;
    return Number;

}

string ReadOperation()
{
    string Operation;
    cout<<"\nPleas tell us what numbers do you want to sum ?\n";
    cout<<"Enter exactly \"Odd Sum\" if you want to sum the Odd numbers.\n";
    cout<<"Eneter exactly \"Even Operation\" if you want to sum the Even numbers.\n";
    cout<<"Enter exactly \"All\" if you want to sum All Numbers.\n\n";
    cout<<"You Enetr your Answer: ";
    getline(cin,Operation);
    return Operation;
}

enCheckOperation CheckOperation(string Operation)
{
    if (Operation == "Odd Sum")
    {
        return enCheckOperation::OpOdd;
    }
    else if(Operation == "Even Operation")
    {
        return enCheckOperation::OpEven;
    }
    else if(Operation == "All")
    {
        return enCheckOperation::OpAll;
    }else
    {
        return enCheckOperation::Opfalse;
    }
    
    
}

enOddOrEven CheckOddOrEven(int Number)
{
    if (Number % 2 == 0)
    {
        return enOddOrEven::Odd;
    }else
    {
        return enOddOrEven::Even;
    }

}

int SumOfOddNumbersWithDoWhileLoop(int Number)
{
    int Counter = 1;
    int Sum = 0;
    do
    {
        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
        
        Counter++;

    } while (Counter <= Number);
    
    return Sum;
    
}

int SumOfOddNumbersWithWhileLoop(int Number)
{
    int Counter = 1;
    int Sum = 0;
    while (Counter <= Number)
    {
        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter; 
        }
        
        Counter++;
    }
    
    return Sum;
}

int SumOfOddNumbersWithForLoop(int Number)
{
    int Sum = 0;
    for (short i = 1; i <= Number; i++)
    {
        if (CheckOddOrEven(i) == enOddOrEven::Odd)
        {
            Sum += i;
        }
        
    }

    return Sum;
}

int SumOfEvenNumbersWithDoWhileLoop(int Number)
{
    int Counter = 1;
    int Sum = 0;
    do
    {
        if (CheckOddOrEven(Counter) == enOddOrEven::Even)
        {
            Sum += Counter;
        }
        
        Counter++;

    } while (Counter <= Number);
    
    return Sum;
    
}

int SumOfEvenNumbersWithWhileLoop(int Number)
{
    int Counter = 1;
    int Sum = 0;
    while (Counter <= Number)
    {
        if (CheckOddOrEven(Counter) == enOddOrEven::Even)
        {
            Sum += Counter; 
        }
        
        Counter++;
    }
    
    return Sum;
}

int SumOfEvenNumbersWithForLoop(int Number)
{
    int Sum = 0;
    for (short i = 1; i <= Number; i++)
    {
        if (CheckOddOrEven(i) == enOddOrEven::Even)
        {
            Sum += i;
        }
        
    }

    return Sum;
}

int SumOfAllNumbersWithDoWhileLoop(int Number)
{
    int Counter = 1;
    int Sum = 0;
    do
    {

            Sum += Counter;
            Counter++;

    } while (Counter <= Number);
    
    return Sum;
    
}

int SumOfAllNumbersWithWhileLoop(int Number)
{
    int Counter = 1;
    int Sum = 0;
    while (Counter <= Number)
    {
        Sum += Counter; 
        Counter++;
    }
    
    return Sum;
}

int SumOfAllNumbersWithForLoop(int Number)
{
    int Sum = 0;
    for (short i = 1; i <= Number; i++)
    {
            Sum += i;
    }

    return Sum;
}

void PrintTheSumOfOddNumbers(int Sum)
{
    cout<<"\n\nThe Sum of Odd Numbers is: "<<Sum<<endl<<endl;
}

void ExcutionOpeeration(enCheckOperation OperationType)
{
    if (OperationType == enCheckOperation::OpOdd)   
    {
        PrintTheSumOfOddNumbers(SumOfOddNumbersWithForLoop(ReadNumberMaxOfRange()));
        PrintTheSumOfOddNumbers(SumOfOddNumbersWithDoWhileLoop(ReadNumberMaxOfRange()));
        PrintTheSumOfOddNumbers(SumOfOddNumbersWithWhileLoop(ReadNumberMaxOfRange()));

    }else if (OperationType == enCheckOperation::OpEven)
    {
        PrintTheSumOfOddNumbers(SumOfOddNumbersWithDoWhileLoop(ReadNumberMaxOfRange()));
        PrintTheSumOfOddNumbers(SumOfEvenNumbersWithWhileLoop(ReadNumberMaxOfRange()));
        PrintTheSumOfOddNumbers(SumOfEvenNumbersWithForLoop(ReadNumberMaxOfRange()));

    }
    else if(OperationType == enCheckOperation::OpAll)
    {

        PrintTheSumOfOddNumbers(SumOfAllNumbersWithDoWhileLoop(ReadNumberMaxOfRange()));
        PrintTheSumOfOddNumbers(SumOfAllNumbersWithWhileLoop(ReadNumberMaxOfRange()));
        PrintTheSumOfOddNumbers(SumOfAllNumbersWithForLoop(ReadNumberMaxOfRange()));

    }
    else
    {
        cout<<"\n\nYou entred a false input try again!\n\n";
        system("color 4F");
        Beep(750,300);
        ExcutionOpeeration(CheckOperation(ReadOperation()));
    }
    
    
    
}


int main()
{
    ExcutionOpeeration(CheckOperation(ReadOperation()));
    return 0;
}