#include<iostream>
#include<string>

using namespace std;

void PrintAllWords()
{

    cout<<"\n";
    string Word = "";

    for (int i = 65; i <= 90; i++)
    {
        for (int  j = 65; j <= 90; j++)
        {
            for (int d = 65; d <= 90; d++)
            {
                Word = Word + char(i);
                Word = Word + char(j);
                Word = Word + char(d);

                cout<<Word<<endl;
                
                Word = "";
            }
            
            cout<<"\n";
        }
        
        cout<<"\n";
    }
    
}

int main()
{
    PrintAllWords();
    return 0;
}