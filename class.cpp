#include<iostream>
using namespace std;
    // Q1. Write a class Student with roll number, name, and marks. Display the details.
class Student{
    public:
    int rollno;
    string name;
    float marks;

    void set_marks(int roll_no,string Name,float Marks){
        rollno=roll_no;
        name=Name;
        marks=Marks;
    }
    void display_details();
};

class Bank{
    public :
    string acc_holder;
    string acc_number;

    private:
    string password;

    public:
    void set_data(string acc_name,string acc_num){
        acc_holder=acc_name;
        acc_number=acc_num;
        password=acc_name.substr(0,3)+acc_number.substr(0,3);       // for now only
    }
    void display_acc_details(){
        cout<<"accont holder name :"<<acc_holder<<endl;
        cout<<"account number:"<<acc_number<<endl;
        cout<<"password:"<<password<<endl;
    }
};
// we can also define the function outside the class
// syntax: returning type class_name :: function_name(arguments)
void Student ::display_details(){
    cout<<"Roll no:"<<rollno<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Marks:"<<marks<<endl;
}
int main (){
    // Class: A class is datatype and a blueprint for objects.

    /* syntax:
    class class_name{
    access specifier:
    varaibles 
    methods
    }*/

 
    /*object creation :
    1. dynamically                  2.static
    data_type *variable =new data_type(values);
    2. static 
    datatype varaible;*/

    Student *st1= new Student;
    st1->set_marks(7007,"Priyanka Pal",94);
    st1->display_details();
    delete st1;
    Bank acc1;
    acc1.set_data("Priyanka Pal","031768");
    acc1.display_acc_details();
}