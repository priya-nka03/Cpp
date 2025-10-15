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
   int num;
   cout<<"Enter the number:";
   cin>>num;
   int sum=0;
   for (int i=1;i<=num;i++){
        sum+=i;
   }
   cout<<sum<<endl;
}