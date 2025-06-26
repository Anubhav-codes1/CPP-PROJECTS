// This is a basic program that will take input from the user and tell them whether the number is even or it is an odd number:

#include <iostream>
using namespace std;

int main(){
    int num=0;
    cout<<"Enter any number greater than 1:"<<endl;
    cin>>num;
    if (num%2==0){
        cout<<"The given number is an EVEN number"<<endl;
    }
    else{
        cout<<"The given number is an ODD number"<<endl;
    }
}