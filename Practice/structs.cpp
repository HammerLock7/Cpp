#include <iostream>

struct students{
    std::string name;
    int grade;
    double gradeAvereage;
    bool graduating;
};

int main(){
    students student1;
    student1.name = "Kylie";
    student1.grade = 12;
    student1.gradeAvereage = 77.98;
    student1.graduating = true;

    std::cout<<"name: "<<student1.name<<'\n'<<"grade: "<<student1.grade<<'\n'<<"grade average: "<<student1.gradeAvereage<<'\n'<<"graduating: "<<student1.graduating<<'\n';

}