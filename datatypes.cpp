#include<iostream> 
#include<string>
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
    int num=23;
    int num2=-23;
    float flt=456.845; // till 6-7 decimal places
    double doble=455.79343; // till 15 decimal places
    char a ='A';                    // like python we cannot define it double quote also in cpp we can define character with single quote only and string with double qoute only.
    string str= "Hello C++";
    bool tf= true;
    cout<<num<< endl <<num2<< endl<<flt<< endl << doble<< endl << a << endl << str<< endl << tf<< endl;
}