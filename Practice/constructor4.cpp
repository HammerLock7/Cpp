#include <iostream>
#include <string>
#include <string_view>

class Employee{
    private:
        std::string m_name{};

    public: 
        Employee(std::string_view name)
            :m_name{name}
            {}

        const std::string& getName() const{return m_name;}
};

void printEmployee(Employee e)// has an Employee parameter
{
    std::cout<<e.getName();
}
int main(){
    printEmployee(Employee{"Joe"});//we are supplying a string literal argument

    return 0;
}