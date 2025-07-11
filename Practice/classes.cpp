/*
    Access functions- A public member function whose job is to retrieve or change
        the value of a private member variable.

        2 types of Access functions:
            -- Getters( accessors) they return the value of a private member variables.
            -- Setters( mutators) they set/change the value of private member variables.
*/
#include <iostream>

class Date{
    private:
        int m_year{2025};
        int m_month{7};
        int m_day{6};

    public: 
        void print(){
            std::cout<<m_year<<'/'<<m_month<<'/'<<m_day<<'\n';
        }
        //use the prefixes set and get when naming your acces functions to make it clear what they are
        // Don't return non-const references to private data members, because the caller is able to use that reference to directly access and possibly change the value of the private member variable 
        const int& getYear() const{return m_year;} // getter for year-- it returns the value of m_year
        void setYear(int year){m_year=year;}// setter for year-- it sets the value of m_year

        int getMonth() const {return m_month;}// getter for month
        void setMonth(int month) {m_month=month;}//setter for month

        int getDay() const {return m_day;}; //getter for day
        void setDy(int day) {m_day=day;}// setter for day
};

int main(){
    Date d{};
    std::cout<<"The year is: "<<d.getYear()<<'\n';

    return 0;
}