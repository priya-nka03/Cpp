#include<iostream>
using namespace std; 

//Q1. Create a class Student with private data members: roll, name, and marks.

class Student{
    int rollno;
    string name;
    float marks;

    public:
    void input(int r,string n,float m){
        rollno=r;
        name=n;
        marks=m;
    }
    void display(){
        cout<<"Roll_no:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};


//Q2. Create a class BankAccount to manage customers’ banking operations.           acc_number, acc_holder_name , balance , password private and withdraw, deposit , display function public.

class Bank{
    string password;
    float balance;
    protected:
    string acc_holder_name;
    string acc_number;
    public:
    Bank(string acc_num,string acc_name){
        acc_holder_name=acc_name;
        acc_number=acc_num;
        password=acc_holder_name.substr(0,3)+acc_number.substr(0,3);
        balance=0;

        cout<<"Account Number:"<<acc_number<<endl;
        cout<<"Account Name:"<<acc_name<<endl;
        cout<<"Balance:"<<balance<<endl;
        cout<<"Your password:"<<password<<endl;
        cout<<"Showing password only once note it down for next time"<<endl;
    }

    void deposit(float amt){
        balance+=amt;
        cout<<"Your amount is deposited "<<endl;
        cout<<"Your Current Balance:"<<balance<<endl;
    }
    void withdraw (float amt){
        if(amt> balance){
            cout<<"Insufficient Balance"<<endl;
            cout<<"Your Balance :"<<balance<<endl;
            return ;
        }
        else{
            balance-=amt;
            cout<<"You widhdraw the amount "<<amt<<" from your account."<<endl;
            cout<<"Your current balance:"<<balance<<endl;
        }
    }
    void display(){
        cout<<"Hello customer"<<endl;
        cout<<"Your Current balance is "<<balance<<endl;
    }
};
int main (){
    /* Access Modifiers:
    access modifiers int c++ define the scope and visibility of data members of a class. They control where the fucntions and variable of the class can access.
    
    1.public :can be aceessed from anywhere in the program.
    2.private : cannot be accessed from outside only in class we can access them.
    3.protected: cannot be accessed from outside but can be accessed in drived class.*/


    Student *st1= new Student;
    st1->input(78,"Priyanka",97);
    st1->display();
    delete st1;

    Bank cus1("1004323480","Ram dev");
    cus1.deposit(800);
    cus1.withdraw(700);
    cus1.display();
}