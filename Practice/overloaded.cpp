#include <iostream>
using namespace std;

int add(int x, int y);
double add(double x,double y);
int main(){
    int x{5};
    int y{4};

    cout<<add(x,y);
    return 0;
}

int add(int x, int y){
    return x+y;
}

double add(double x, double y){
    return x+y;
}