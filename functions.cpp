#include <iostream>
using namespace std;
int sumOfDigits(int n){
    int sum=0;
    while(n!=0){
        int r=n%10;
        sum+=r;
        n/=10;
    }
    return sum;
}
void swapNumbers(int &x, int &y){
    x=x+y;
    y=x-y;
    x=x-y;
}
void checkPrime(int n){
    int flag=1;
    for (int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if (flag==1){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
}
int factorial(int n){
    if (n==1||n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main (){
    /*Function : It is a block of code which is used to perform some specific task when it is called.
    The idea is to put some commonly used or repeatdly used code inside a block (called function) and call the block when needed instead of writing the code again and again.
    
    main() is also a function which can be called only once whereas other functions can be called multiple times.
    
    return mark as the end of the function(main funciton).
    */


    //Ques1: Write a function sumOfDigits(int n) that returns the sum of digits of the given number.
    cout<<sumOfDigits(67)<<endl;

    /* Calling methods : 
    1. pass-by-value:a copy of arguments is passed. Does not change the original values.
    2. pass-by-Reference(with the help of reference variable): reference variable is nothing but another name of the original variable that this reference variable is pointing to the same memeory location. Changes will take place at the original values.
    3. pas-by-reference(with the help of pointer) */

    // Ques2:Write a function swapNumbers(int &x, int &y) using call by reference to swap two numbers without using a third variable.
    int x,y;
    cout<<"Enter the values:";
    cin>>x>>y;
    swapNumbers(x,y);
    cout<<"X:"<<x<<" Y:"<<y<<endl;

    //Ques3:Write a program with a function checkPrime(int n) that checks if a number is prime or not.
    int n;
    cout<<"Enter number:";
    cin>>n;
    checkPrime(n);

    // Ques4:Write a recursive function to find the factorial of a number.
    cout<<factorial(5)<<endl;
}