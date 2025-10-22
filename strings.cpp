#include<iostream>
#include<string>
using namespace std;

string Palindrome(string str){
    int start=0;
    int end=str.size()-1;
    while(end>start){
        if(tolower(str[start])!=tolower(str[end])){
            return "Not Palindrome" ;
        }
        else{
            start++;
            end--;
        }
    }
    return "Palindrome";
}
int main(){
    /*String : String is a collection or sequence of characters.*/
    string str="eye";
    cout<<Palindrome(str);
}