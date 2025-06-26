#include <iostream>
using namespace std;

int main (){
    const char *p_message{"Hello, World!"}; // This is illegal
    cout<<*p_message<<'\n';

    return 0;
}