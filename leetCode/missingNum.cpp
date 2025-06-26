#include <iostream>
using namespace std;
// We are writing a program that will be able to find a missing element in an array

void findNumber(int* array, int size);
int main (){
    int size;// size of array
    cout<<"Enter the size you want: ";
    cin>>size;
    int* array{new int[size-1]};// allocating memory in the heap, though not recommended

    cout<<"Enter any "<<size-1<<" numbers you want.\n";//prompt for user to enter any given elements, omiting one
    for(int i{}; i<size-1; i++){
        cin>>array[i];
    }

    findNumber(array, size);// calling a function that will find the missing element

    delete[] array;// deallocating memory in the heap to avoid memory leak
    array=nullptr;
    return 0;
}

void findNumber(int* array, int size){
    bool found; 
    for(int i{1}; i<=size; i++){
        found= false;// will reset to false everytime a given element is found
        for(int j{}; j<size-1; j++)
        if(i == array[j]){
            found = true;
        }
        if(!found){ // if element is not found it will remain false thus informing us of the missing element
            cout<<"The missing number is: "<<i<<'\n';
            return;// terminating the function once element missing is found, only suitable for one missing element not more
        }
    }
    cout<<"THere is no missing number";// if there is no missing element
}