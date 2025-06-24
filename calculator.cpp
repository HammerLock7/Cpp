#include <iostream>
using namespace std;

int main(){
    char op;
    double result, num1, num2;
    cout<< "Which operator do you want to use(+,-,*,/): "<<'\n';
    cin>>op;
    cout<<"Enter number1: "<<'\n';
    cin>>num1;
    cout<<"Enter number2: "<<'\n';
    cin>>num2;

    switch(op){
        case '+':
            result= num1 + num2;
            cout<<num1<<'+'<<num2<<'='<<result;
            break;
        case '-':
            result= num1-num2;
            cout<<num1<<'-'<<num2<<'='<<result;
            break;
        case '*':
            result= num1*num2;
            cout<<num1<<'*'<<num2<<'='<<result;
            break;
        case '/':
            result= num1/num2;
            cout<<num1<<'/'<<num2<<'='<<result;
            break;
        default:
            cout<<"Enter a valid operator";
    }

    return 0;
}