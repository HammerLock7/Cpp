#include <iostream>
#include "Date.h"

inline Date::Date(int year, int month, int day) // constructor definition
    : m_year{ year }
    , m_month{ month }
    , m_day{ day }
{
}

inline void Date::print() const // print function definition
{
    std::cout << "Date(" << m_year << ", " << m_month << ", " << m_day << ")\n";
};

int main(){
    const Date d{2015, 10, 14};
    d.print();

    return 0;
}