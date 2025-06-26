#include <iostream>
/*
typedef = it is used to create another name (alias) for data types.
          new identifier for existing data types. Helps with readability and reduces typos.
*/
typedef std::string string_t; // you can use this
using string_n = std::string; //this one is mostly used nowadays
int main(){
    string_t name = "Tshepo Nchabeleng";
    std::cout<< name<<std::endl;

    string_n university = "University of Pretoria";
    std::cout<< university;

    return 0;
}