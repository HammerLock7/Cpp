#include <iostream>
using namespace std;

int callReference(int &num);
int main(){
int number{5};

int results= callReference(number);
cout<<number;

    return 0;
}

int callReference(int &num){
    num=10;
    return num;
}