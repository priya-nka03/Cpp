#include <iostream>
using namespace std;

int main (){
    //loop => loop is used to do repeateadly exceute a block of code untill a specified condition is met. It is reduces redundancy in the code.
    // we have three types of loops in c++
    /*1. for loop: it is mainly used when the no of iteration is known in advance. it will run till the condition is true.
    syntax:
    for (initialization ;condition ; update){
    // code 
    }
    */
   //Ques 1.Write a program to find the sum of first N natural numbers using a for loop.
//    int num;
//    cout<<"Enter the number:";
//    cin>>num;
//    int sum=0;
//    for (int i=1;i<=num;i++){
//         sum+=i;
//    }
//    cout<<sum<<endl;

   // Ques2: factorial of number
   int num2;
   cout<<"Enter number:";
   cin>>num2;
   int fact=1;
   for (int i=num2;i>0;i--){
        fact*=i;
   }
   cout<<fact<<endl;

   // while loop => this exceute the block of code repeatedly as long as the given condition is true. The condition is checked before each iteration.
   /*syntax:
   intialization
   while(condition){
    increment
    }*/

    // Ques3: print table of a number
    int num3;
    cout<<"Enter number:";
    cin>>num3;
    int i=1;
    while(i<=10){
        cout<<num3<<" X "<<i<<" = "<<num3*i<<endl;
        i++;
    }

    // Ques4: reverse a number using while loop
    int num4;
    cout<<"Enter number:";
    cin>>num4;
    int rev=0;
    int r;
    while(num4!=0){
        r=num4%10;
        rev=(rev*10)+r;
        num4/=10;
    }
    cout<<rev<<endl;



    
}