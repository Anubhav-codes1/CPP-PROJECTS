// This is a basic program that takes two inputs from the user and tells which one is greater:

#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter your number1:"<<endl;
    cin>>num1;
    cout<<"Enter your number2:"<<endl;
    cin>>num2;
    if(num1>num2){
        cout<<num1<<" is greater than "<<num2<<endl;
    }
    else if(num1==num2){
        cout<<"Both numbers are same"<<endl; 
    }
    else{
        cout<<num2<<" is greater than "<<num1<<endl;
    }
}