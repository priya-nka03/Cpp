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
int main (){
    /*Function : It is a block of code which is used to perform some specific task when it is called.
    The idea is to put some commonly used or repeatdly used code inside a block (called function) and call the block when needed instead of writing the code again and again.
    
    main() is also a function which can be called only once whereas other functions can be called multiple times.
    
    return mark as the end of the function(main funciton).
    */


    //Ques1: Write a function sumOfDigits(int n) that returns the sum of digits of the given number.
    cout<<sumOfDigits(67)<<endl;
}