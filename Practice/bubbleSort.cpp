#include <iostream>
using namespace std;

void sortedArray(int array[],int size);
int main(){
    int numbers[]= {10,5,6,9,7,8,1,2,3,4};
    int size= sizeof(numbers)/sizeof(numbers[0]);

    sortedArray(numbers, size);

    for(int number : numbers){
        cout<<number<<" ";
    }
}

void sortedArray(int array[],int size){
    int storage;
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(array[j]>array[j+1]){
                storage=array[j];
                array[j]=array[j+1];
                array[j+1]=storage;
            }
        }
    }
}