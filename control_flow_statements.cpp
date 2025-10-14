#include<iostream>
using namespace std;

int main (){
    // Control Flow Statement : these are the statments used to control the flow of the program. It allows decision-making and repeatation of code.
    // It includes : if-else statements, switch-case, looping, break-continue keywords.

    //1. if-else statement : syntax:
    /* if (condition){
        // code when conditon is true
    }
    else{
        // code when codition is not true
    }*/
   
    /* Ques1: Assign grade to the students for which marking scheme is :
    90-100= A
    80-90= B
    70-80= C
    60-70= D 
    50-60= E 
    40-50= F
    less than 40 = Fail */

    // float marks;
    // cout<<"Enter the marks of the student:";
    // cin>>marks;
    // cout<<marks<<endl;
    // if(marks>90 and marks<=100){
    //     cout<<"GRADE : A"<<endl<<"Remarks :Excellent! "<<endl;
    // }
    // else if (marks>80 and marks<=90){
    //     cout<<"GRADE : B"<<endl<<"Remarks :Very Good"<<endl;
    // }
    // else if (marks>70 and marks<=80){
    //     cout<<" GRADE : C"<<endl<<"Remarks :Good"<<endl;
    // }
    // else if (marks>60 and marks<=70){
    //     cout<<"GRADE : D"<<endl<<"Remarks :Can do better"<<endl; 
    // }
    // else if (marks>50 and marks<=60){
    //     cout<<"GRADE : E"<<endl;
    // }
    // else if (marks>40 and marks<=50){
    //     cout<<"GRADE : F"<<endl;
    // }
    // else{
    //     cout<<"FAIL"<<endl;
    // }


    // question 2: identify if the given year is leap year or not 
    int year ;
    cout<<"Enter year:";
    cin>>year;
    cout<<year<<endl;
    if ((year%4==0 and year%100!=0) or year%400==0){
        cout<<"Leap Year"<<endl;
    }
    else{
        cout<<"Not a leap year"<<endl;
    }
}