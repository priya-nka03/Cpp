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
    // ==,<=,>=,<,>,=! 
    // they return a bool value true or false 0 or 1 0=false 1=true
    int op1,op2,op3;
    op1=34;
    op2=90;
    op3=333;
    cout<<(op1>op2)<<endl;
    cout<<('a'<'A')<<endl ;

    //Logical Operator => used to combine two conditions and produce a bool output
    // && - Logical AND gate (jb dono true honge tbhi true return karega)
    // || - Logical OR gate (jb dono m se koi bhi true hoga then wo true return karega)
    // ! - Not gate (opposite of the result obtained)

    int num1,num2;
    num1=0;num2=2;
    cout<<(num1&&num2)<<endl;               // 0 beacause num1=0(flase) and num=2(ture)
    cout<<(num1||num2)<<endl;
    cout<<!(5<2)<<endl;


    //Bitwise Operator :
    int num3=4;
    int num4=6;
    cout<<(num3&num4)<<endl;          // bitwise AND  => return 1 when both are true
    cout<<(num3|num4)<<endl;          // bitwise OR   => return 1 when any one of the input is one 
    cout<<(~num3)<<endl;           // bitwise NOT => 1. binary m convert 2.NOT of that 3. ek negative number aaega to print that 2's complement of that
    cout<<(num3^num4)<<endl;          // bitwise XOR


    // Right Shift (>>)
    cout<<(53>>1)<<endl; 
    cout<<(53>>2)<<endl; 
    //Left Shift (>>)
    cout<<(53<<1)<<endl;
}