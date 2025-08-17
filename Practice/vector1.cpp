#include <iostream>
#include <vector>

int main(){
    //uses list construction-- vector containing 5 elements
    std::vector<int> grades{2,3,4,5,6};

    // vector containing  char elements-- it is using CTAD to deduce element type char
    std::vector vowels{'a', 'e', 'i', 'o', 'u'};

    // we use the subscript ([]) operator to access different elements
    std::cout<<"The first number is: "<<grades[0]<<'\n';
    std::cout<<"The first vowel is: "<<vowels[0]<<'\n';

    //constructing a vector of specific length
    std::vector<int> data(10); // a vector containing 10 int elements, value initialized to 0

    // you can't use direct initialization to set the length of a vector inside a class/struct
    // because direct initialization is not allowed 
    //e.g
    struct Foo{
        std::vector<int> v1(8);//compiler error, not allowed direct initialization

        //instead use this
        std::vector<int> v1{std::vector<int>(8)};// this is okay
    }

    return 0;
}