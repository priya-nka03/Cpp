#include<iostream>
using namespace std;
int main ()
{
/*Operators
Operators are the symbols which are used to perform certain operation.
Types
1.Arithmetic Operator
2.Relational Operator
3.Bitwise Operator
4.Logical Operator*

1.Arithmetic Operator => These Operators are used to perform mathematical operation*/
// 1. arithmetic operators - +,-,*,/,%,x++,x--
    //  + => add two numbers
    // - => substracts from one to another
    // * => multiplies two number
    // / => divide two number
    //  % => returns reminder after divison
    // 1.a%b if a>b normal reminder 
    // 2.a%b if a<b then answer will be a only 
    // 3.a%a=0 
    // 4.a%-b = a%b wo a%-b ko a%b jaise hi treat karega 
    // 5. -a%b = -[a%b]
    //  x++,x-- => increment, decrement operator(+1 karega ek -1 karega)

    int a,b;
    a=34;
    b=345;
    cout<<"sum:"<<a+b<<endl;
    cout<<"substract:"<<a-b<<endl;
    cout<<"multiplication:"<<a*b<<endl;
    cout<<"divide:"<<a/b<<endl;
    cout<<"modulus:"<<a%b<<endl; // int+int=int that's way it is 0 it has not include the value after point
    cout<<"post-increment:"<<a++<<endl;             // means first use a then increment it
    cout <<"after post increment"<<a<<endl;
    cout<<"post-decrement:"<<a--<<endl;             // means first use a then decrement it 
    cout<<"after post decrement:"<<a<<endl;
    cout<<"pre-increment:"<<++a<<endl;             // first increment then use it 
    cout<<"after pre-increment"<<a<<endl;
    cout<<"pre-decrement:"<<--a<<endl;             // first decrement then use it 
    cout<<"after pre decrement"<<a<<endl;

    // Relational Operator : used to define relation(comparison) between operands
    
}