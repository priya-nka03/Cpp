#include <iostream>
using namespace std;
int main(){
    // Pointer : pointer is a varaible which points to another variable (it basically store the address of the variable inside a variable).

    /* declaration: datatype * variable = address_of_the_variable*/

    int num1=89;
    int *numprt=&num1;
    cout<<numprt<<endl;                 // pointer
    cout<<sizeof(numprt)<<endl;         // size of the pointer
    cout<<*numprt<<endl;                // dereferencing operator

    // NULL pointer => when we assign null to a pointer means this pointer is not pointing to any variable and it will store 0
    int *intprt=NULL;                   // NULL pointer
    cout<<intprt<<endl;                 // value of null pointer 0
    cout<<sizeof(intprt)<<endl;
    int ch=90;
    intprt=&ch;                         // updation of null pointer
    cout<<intprt<<endl;
    cout<<*intprt<<endl;


    // pointer arithemetic -> addtion substration of a constant, increment, drecerment and substraction of two pointers .
}