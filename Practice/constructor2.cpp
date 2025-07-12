#include <iostream>
#include <string>
#include <string_view>

class Employee{
    private: 
        std::string m_name{"???"};
        int m_id{0};
        bool m_isManager{false};

        void printCreated()const{ //helper functions, it is not recommended for condtructors to print something unless for debugging purposes
            std::cout<<"Employee: "<<m_name<<" created\n";
        }
    
    public: 
        Employee(std::string_view name, int id)
            :m_name{name}, m_id{id}
        {
            printCreated();
        }
        Employee(std::string_view name, int id, bool isManager)
            : m_name{name}, m_id{id}, m_isManager{isManager}
        {
            printCreated();
        }

};

int main(){
    Employee e1{"James", 7};
    Employee e2{"David", 42, true};

    return 0;
}