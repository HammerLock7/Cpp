#include <iostream>
using namespace std;

int searchArray(int array[], int size, int element);
int main(){
    int array[]={1,3,5,2,6,7,4,8};
    int size = sizeof(array)/sizeof(array[0]);
    int element;

    cout<<"which element do you want: ";
    cin>>element;

    int position=searchArray(array,size, element);

    if(position >= 0){
        cout<<"The element you want is index: "<<position<<endl;
    }else{
        cout<<"The element you searched for is not found."<<endl;
    }
}

int searchArray(int array[], int size, int element){
    for(int i=0; i<size; i++){
        if(array[i]== element){
            return i;
        }
    }
    return -1;
}