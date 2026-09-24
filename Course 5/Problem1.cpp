#include<iostream>// Include the iostream library for input/output operations
using namespace std;// Use the standard namespace to avoid using the "std::" prefix



void PrintHeaderTable()
{
    cout<<"\n\n\t\t\t\tMultiplication Table\n\n";
    cout<<"\t";

    for (short i = 1; i <= 10; i++)
    {
        cout<<i<<"\t";
    }

    cout<<"\n____________________________________________________________________________________\n";
    
}

string ColumSeparator(int i)
{
    if (i < 10)
    {
        return "  |";
    }else
    {
        return " |";
    }
    
}

void PrintMultiplicationTable()
{
    PrintHeaderTable();

    for (short i = 1; i <= 10; i++)
    {
        cout<<" "<<i<<ColumSeparator(i)<<"\t";

        for (short j = 1; j <= 10; j++)
        {
            cout<<i*j<<"\t";
        }
        
        cout<<endl;
    }
    
}

int main() // Main function: Program entry point
{
    PrintMultiplicationTable();
    return 0;     // Return 0 to indicate successful program execution

}