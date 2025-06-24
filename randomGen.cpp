#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

    srand(time(NULL));
    
    int counter=0;
    int num;

    do{
        num = rand()%100 + 1;
        cout<<"Random Number: "<< num<<'\n';
        counter++;
        cout<<"counter: "<<counter<<'\n';
    }while(num != 53);
    return 0;
}