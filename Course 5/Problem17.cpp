#include<iostream>
#include<string>

using namespace std;

string ReadWord(string Message)
{
    string Word;

    cout<<Message;
    getline(cin,Word);

    return Word;

}

bool Gess3LetterPassword( string PassWord)
{
    string Word = "";
    int counter = 0;

    for (int i = 65; i <= 90; i++)
    {
        for ( int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                counter++;

                Word = Word + char(i);
                Word = Word + char(j);
                Word = Word + char(k);

                cout<<"Trail["<<counter<<"] : "<<Word<<endl;

                if (Word == PassWord)
                {
                    cout<<"\nPassword is "<<PassWord<<endl;
                    cout<<"Found after "<<counter<<" Trials.";
                    return true;

                }
                
                Word = "";
            }
            
        }
        
    }

    return false;
    
}

int main()
{
   Gess3LetterPassword(ReadWord("\nPlease enter a Positive Word : "));
   return 0;
}