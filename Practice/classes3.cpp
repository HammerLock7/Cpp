// classes get longer and complicated, haveing all the member function definitiions inside
// the class and it makes it complicated to manage and work with
//we can separate the public interface and the member function implementation
//to avoid cluttering the public interface with info that is not relevant to using the class 
#include <iostream>

class Date{
    private:
        int m_year{};
        int m_month{};
        int m_day{};

    public:
        Date(int year, int month, int day);//constructor declaration

        void print()const;//print function declaration

        int getYear() const{return m_year;}
        int getMonth() const{return m_month;}
        int getDay() const{return m_day;}
};

Date::Date(int year, int month, int day)//constructor definition
    :m_year{year}
    ,m_month{month}
    ,m_day{day}
    {}

void Date::print()const{//print function definition
    std::cout<<"Date("<<m_year<<", "<<m_month<<", "<<m_day<<")\n";
};

int main(){
    const Date d{2015, 10, 14};
    d.print();

    return 0;
}