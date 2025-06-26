#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player, computer;
    player=getUserChoice();
    computer=getComputerChoice();
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){
    char choice;
    do{
        cout<<"What do you want.\n";
        cout<<"'r' for rock.\n";
        cout<<"'p' for paper.\n";
        cout<<"'s' for scissor.\n";
        cin>>choice;
        cout<<'\n';
    }while(choice !='r' && choice !='p' && choice != 's');

    switch(choice){
        case 'r':
            cout<<"Player's choice: Rock.\n";
            break;
        case 'p':
            cout<<"Player's choice: Paper.\n";
            break;
        case 's':
            cout<<"Player's choice: Scissor.\n";
            break;
    }
    
    return choice;
}

char getComputerChoice(){
    int choice;
    char randChoice;
    srand(time(NULL));
    choice = rand()%3 + 1;

    switch(choice){
        case 1: 
            randChoice= 'r';
            return randChoice;
        case 2:
            randChoice= 'p';
            return randChoice;
        case 3:
            randChoice= 's';
            return randChoice;
    }
}

void showChoice(char choice){
    switch(choice){
        case 'r':
            cout<<"Computer's choice: Rock.\n";
            break;
        case 'p':
            cout<<"Computer's choice: Paper.\n";
            break;
        case 's':
            cout<<"Computer's choice: Scissor.\n";
            break;
    }
}

void chooseWinner(char player, char computer){
        switch(player){
            case 'r':
                if(computer=='r'){
                    cout<<"It's a tie.\n";
                }else if(computer=='p'){
                    cout<<"You lose.\n";
                }else if(computer=='s'){
                    cout<<"You win.\n";
                }
                break;
            case 'p':
                if(computer=='r'){
                    cout<<"You win.\n";
                }else if(computer=='p'){
                    cout<<"It's a tie.\n";
                }else if(computer=='s'){
                    cout<<"You lose.\n";
                }
                break;
            case 's':
                if(computer=='r'){
                    cout<<"You lose.\n";
                }else if(computer=='p'){
                    cout<<"You win.\n";
                }else if(computer=='s'){
                    cout<<"It's a tie.\n";
                }
                break;
                
    }

}