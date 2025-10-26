#include<iostream>
using namespace std;

//Q1. Write a class Rectangle with constructors to initialize and find area.

class Rectange{
    public:
    float lenght;
    float breadth;

    Rectange(float l,float b){
        lenght=l;
        breadth=b;
    }
    float result(){
        return lenght*breadth;
    }
};

//Q2.Create a class Complex to add and subtract two complex numbers.

class Complex{
    public:
    int real;
    int img;

    Complex(int r,int i){
        real=r;
        img=i;
    }
    Complex(){
        real=0;
        img=0;
    }

    Complex add(Complex c1,Complex c2){
        Complex result;
        result.real=c1.real+c2.real;
        result.img=c1.img+c2.img;
        return result;
    }

    Complex subtract(Complex c1,Complex c2){
        Complex result;
        if (c1.img>c2.img){
            cout<<"Invalid Calculation";
            return result;
        }
        result.real=c2.real-c1.real;
        result.img=c2.img-c1.img;
        return result;
    }

    void display(Complex c1){
        cout<<c1.real<<" + "<<c1.img<<"i"<<endl;
    }
};
int main (){

    /* Constructor: 
    1.Contructor is a special type of fuction which has the same name as the class.
2.Constructor is automatically invoked when object is created.
3.Constructor must be decalred in public section if it is declared in private section it will inaccessable.
3.Constructor does not have any return type or it  does not return any value.
4.Constructor is used to initialize the value of the member vairiable of the class.
5.Contsructor can have default arguments.
6.We cannot refer to the address of the constructor .
7.It is used to create the memory for the objects.
8.A constructor can be overloaded but cannot be inherited or virtual.
9.A class can have many constructor.


Types:
1.Default Constructor--> where we does not pass any arguments.
2.Parameterized Constructor--> where we pass some arguments.
3.Copy Constructor--->passing objects to the constructor.*/

    Rectange r1(90,3);
    cout<<r1.result()<<"sq.cm"<<endl;

    Complex C1(9,2),C2(6,1), result;
    result =C1.add(C1,C2);
    result.display(result);
    result=C1.subtract(C1,C2);
    result.display(result);
}