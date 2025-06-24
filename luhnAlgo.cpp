#include <iostream>
using namespace std;

int doubleVal (string numID, int size);
int oddSum(string numID, int size);
int main(){
    string cardNum;
    cout<<"Card Number: ";
    getline(cin, cardNum);

    int size = cardNum.length();
    int number = doubleVal(cardNum, size) + oddSum(cardNum, size);
    if(number%10 == 0){
        cout<<"The card Number is valid.\n";
    }else{
        cout<<"The card number is invalid\n";
    }

    return 0;

}

int doubleVal (string numID, int size){
    int sum=0;
    for(int i= size-2; i>=0; i-=2){
        int digit=(numID[i]-'0')*2;
        if(digit > 9){
            digit -= 9;
        }
        sum += digit;
    }
    return sum;
}

int oddSum(string numID, int size){
    int sum=0;
    for(int i=size-1; i>=0; i-=2){
        int digit = (numID[i]-'0');
        sum+=digit;
    }
    return sum;
}