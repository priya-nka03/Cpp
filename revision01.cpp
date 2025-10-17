#include <iostream>
using namespace std;

int main(){
    //Q1. Write a program to check whether a given number is even or odd using an if-else statement.
    int num1;
    cout<<"Enter Number:";
    cin>>num1;
    if(num1%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }

    //Q2. Write a program that takes a student's marks as input and displays the grade according to the following:

    /*Marks >= 90 → Grade A
    Marks >= 75 → Grade B
    Marks >= 50 → Grade C
    Marks < 50  → Grade Fail*/

    float marks;
    cout<<"Enter Marks:";
    cin>>marks;
    if(marks>=90){
        cout<<"Grade A"<<endl;
    }
    else if(marks>=75 and marks<90){
        cout<<"Grade B"<<endl;
    }
    else if (marks>=50 and marks<75){
        cout<<"Grade C"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }

    // Ques4:Make calculator using switch case

    char op;
    cout<<"Choose Operator (+,-,*,/):";
    cin>>op;
    double num2,num3;
    cout<<"Enter the numbers";
    cin>>num2>>num3;
    switch(op){
        case '+':
        cout<<num2+num3<<endl;
        break;
        case '-':
        if (num2>=num3){
            cout<<num2-num3<<endl;
        }
        else{
            cout<<num3-num2<<endl;
        }
        break;
        case '*':
        cout<<num2*num3<<endl;
        break;
        case '/':
        cout<<num2/num3<<endl;
        break;
    }
    //Ques5:Write a program to print all numbers from 1 to 100 that are divisible by 5 using a for loop.
    for (int i=1;i<=100;i++){
        if(i%5==0){
            cout<<i<<endl;
        }
    }

    // Ques 6: Write a program to print the following pattern using nested loops:

    /*    
        *
        * *
        * * *
        * * * *  
    */
   int end;
   cout<<"Enter:";
   cin>>end;
   for (int i=0;i<end;i++){
    for (int j=0;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
   }
}