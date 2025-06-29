#include <iostream>
using namespace std;

int repetitions(char* array);
int main(){
    char array[]={'A','A','C','G','T','A','T','T','T'};

    int reps{repetitions(array)};
    cout<<reps;
        return 0;
}

int repetitions(char* array){
    int counter{};
    char storage;
    int size{sizeof(array)/sizeof(array[0])};
    for(int i{}; i<size; i++){
        for(int j{1}; j<size; j++){
            storage= array[i];
            if(storage != array[j]){
                continue;
            }else if(storage == array[j]){
                counter++;
            }
        }
    }
    return counter;
}