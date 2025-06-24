#include <iostream>
#include <iomanip>
// A program that acts as a bankapp you can swee your balance, withdraw, deposit
using namespace std;

void showBalance(double balance);
void withdraw(double amount);
void deposit(double funds);

int main(){
    int choice;
    double amount = 320;
    

    do{
        cout<<"What do you want to do: "<<'\n';
        cout<<"1. Check your balance\n";
        cout<<"2. Withdraw Amount\n";
        cout<<"3. Deposit money\n";
        cout<<"4. Exit\n";
        cin>>choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1:
                showBalance(amount);
                break;
            case 2:
                withdraw(amount);
                break;
            case 3:
                deposit(amount);
                break;
            case 4:
                cout<<"Thank you for visiting!\n";
                break;
            default:
                cout<<"Invalid option.\n";
        }

    }while( choice != 4);


    return 0;
}

void showBalance(double balance){
    cout<<"Balance: R"<<std::fixed<<std::setprecision(2)<<balance<<std::endl;
}

void withdraw(double amount){
    double withdraw;
    cout<<"Available balance: R"<<std::fixed<<std::setprecision(2)<<amount<<std::endl;
    cout<<"How much do you want to withdraw: R";
    cin>>withdraw;
    if(withdraw<0){
        cout<<"That's not a valid amount!\n Try Again";
    }else if(withdraw>amount){
        cout<<"Insufficient Funds!\n";
        cout<<"Balance: R"<<std::fixed<<std::setprecision(2)<<amount<<std::endl;
    }else{
        amount-=withdraw;
        cout<<"Money successfully withdrawn!\n"<<"Available Funds: R"<<std::fixed<<std::setprecision(2)<<amount<<std::endl;
    }

}

void deposit(double funds){
    double amount;
    cout<<"Available Balance: R"<<std::fixed<<std::setprecision(2)<<funds<<std::endl;
    cout<<"How much do you want to deposit: R";
    cin>>amount;
    if(amount<0){
        cout<<"That's not a valid amount.\n Try Again.\n";
    }else{
        funds+=amount;
        cout<<"Successfully Deposited!\n"<<"Available Balance: R"<<std::fixed<<std::setprecision(2)<<funds<<std::endl;
    }
    

}