#include <iostream>
using namespace std;

int main(){
    string array[10];
    int size = sizeof(array)/sizeof(array[0]);

    fill(array, array+size, "spinach");
    for(string food : array ){
        cout<<food<<endl;
    }

    return 0;
}