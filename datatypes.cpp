#include<iostream> 
#include<string>
#include<typeinfo>
#define gravity=9.8;
using namespace std;

int main() {
    // Data types : datatype is a classification that specify which type of data a variable can store in it.

    // C++ has multiple datatype :
    /*
    1. char => 1 byte => will store only a single character (characters are defined with single quote)
    2. int => 4 byte => will store integers (negative and positive but not decimal)
    3. float => 4 byte will store decimal numbers till a range.
    4. boolean =>1 byte => will store the values as True or False 
    5. double => 8 byte => will sorte decimal number but till extensive range
    6. string - used to store a collection of characters used with double qoute . fot using string we should include a header file at the top <string> */


    //1. Write a program to declare variables of all basic data types (int, float, char, double, bool) and display their sizes using the sizeof operator.

    int num=23;
    int num2=-23;
    float flt=456.845; // till 6-7 decimal places
    double doble=455.79343; // till 15 decimal places
    char a ='A';                    // like python we cannot define it double quote also in cpp we can define character with single quote only and string with double qoute only.
    string str= "Hello C++";
    bool tf= true;
    cout<<num<<" - "<<sizeof(num)<< endl <<num2<<" - "<<sizeof(num2)<< endl<<flt<<" - "<<sizeof(flt)<<  endl << doble <<" - "<<sizeof(double)<< endl << a <<" - "<<sizeof(a)<< endl << str<<" - "<<sizeof(str)<< endl << tf<<" - "<<sizeof(tf)<< endl;



    // Ques2: Write a C++ program to take input of your name, age, and height from the user and print them on the screen.

    string name;
    int unsigned age;
    float height;
    cout<<"Enter name:";
    cin>>name;
    cout<<name<<endl;
    cout<<"Enter age:";
    cin>>age;
    cout<<age<<endl;
    cout<<"Enter Height:";
    cin>>height;
    cout<<height<<endl;

    //Ques3: Declare a const float PI = 3.14159; and find the area and circumference of a circle by taking radius as input from the user.
    const float PI=3.14;
    float radius=5;
    cout<<"Area:"<<PI*radius*radius<<endl;
    cout<<"Circumference:"<<2*PI*radius<<endl;



    //Ques 4:Write a program that demonstrates implicit and explicit type conversion in C++ (for example, from int to float and float to int).
    int result ;
    int number1=90;
    float number2=89.2;
    result = number1+number2;               // number2 is implicted converted (int to float) before adding to number 1
    cout<<result<<endl;
    cout<<sizeof(result)<<endl;

    //Ques 5: Write a C++ program to swap two numbers using a temporary variable and display the result.

    int swap1=5; int swap2=8;
    int temp;
    temp=swap1;
    swap1=swap2;
    swap2=temp;
    cout<<swap1<<" "<<swap2<<endl;

    //Ques6:Explain and write a program that uses a symbolic constant (#define) to store the value of gravity (9.8) and calculate weight given mass.
}