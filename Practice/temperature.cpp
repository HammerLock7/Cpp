#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double answer, celsius, fahrenheit;
    cout<< "What do you want to convert\n";
    cout<<"1. Celsius to fahrenheit\n";
    cout<<"2. Fahrenheit to celsius\n";
    cout<<"Choose either 1 or 2\n";
    cin>>answer;

    if(answer==1){
        cout<<"What is your temeperature in Celsius: ";
        cin>>celsius;
        fahrenheit=(celsius*9/5)+32;
        cout<<"Fahrenheit: "<<std::fixed<<std::setprecision(2)<<fahrenheit<<'F'<<std::endl;
    }
    else if(answer==2){
        cout<<"What is your temperature in fahrenheit: ";
        cin>>fahrenheit;
        celsius=(fahrenheit - 32)* 5/9;
        cout<<"Celsius: "<<std::fixed<<std::setprecision(2)<<celsius<<'C'<<std::endl;
    }        
    else{
        cout<<"Enter a valid answer!";
    }

    return 0;
}