#include<iostream>
using namespace std;

struct stOperationInfos
{
    float Number1,Number2;
    char OprerationType;
};

 stOperationInfos ReadoperationInfos()
 {
    stOperationInfos Operation;
    char OT = ' ';
    cout<<"\n\nPlease enter The first Number: ";
    cin>>Operation.Number1;
    cout<<"\nPlease enter The second Number: ";
    cin>>Operation.Number2;
    cout<<"\nPlease enter The Operation Type: \n";
    do{
    cout<<"\"+\" for Addition, \"-\" for Subtraction, \"*\" for Multiplication \"/\" for Devision: ";
    cin>>Operation.OprerationType;
    OT = Operation.OprerationType;

    }while(!(OT == '+' || OT == '-' || OT == '/' || OT == '*'));


    return Operation;

 }

 float SubtractTwoNumbers(float Number1, float Number2)
 {
    return (Number1 - Number2);
 }

 float AddTwoNumbers(float Number1, float Number2)
 {
    return (Number1 + Number2);
 }

 float MultiplyTwoNumbers(float Number1, float Number2)
 {
    return (Number1 * Number2);
 }

 float DevisionTwoNUmbers(float Number1, float Number2)
 {
    return (Number1 / Number2);
 }

 float CheckOperation(stOperationInfos Operation)
 {
    if (Operation.OprerationType == '+')
    {
        return AddTwoNumbers(Operation.Number1,Operation.Number2);

    }else if (Operation.OprerationType == '-')
    {
        return SubtractTwoNumbers(Operation.Number1,Operation.Number2);

    }else if(Operation.OprerationType == '/')
    {
        return DevisionTwoNUmbers(Operation.Number1,Operation.Number2);

    }else
    {
        return MultiplyTwoNumbers(Operation.Number1,Operation.Number2);
    }
 }

 void PrintOperation(stOperationInfos Operation)
 {

    cout<<"The result:  "<<CheckOperation(Operation);

 }

 int main()
 {
    PrintOperation(ReadoperationInfos());
 }