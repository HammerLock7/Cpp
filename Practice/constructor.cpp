#include <iostream>
/*
class Foo{
    int m_x{};
    int m_y{};

    public:
        Foo(int x, int y){
            std::cout<<x<<", "<<y<<" constructed\n";
        }
        void print(){
            std::cout<<m_x<<", "<<m_y<<'\n';
        }
};

int main(){
    Foo foo{6, 7};
    foo.print();

    return 0;
}
*/

class Foo{
    private: 
        int m_x{};
        int m_y{};

    public:
        Foo(int x, int y)
            : m_x{x}, m_y{y}//member initialization list -- is is used to initialize private member variables in a class 
        // or if the member variables are alot 
        // : m_x{x}
        //,m_y{y}     
        //the members in a member initializer list are always initialized in the order in which they are defined inside the class.
        {
            std::cout<<x<<", "<<y<<" constructed\n";
        }
        void print(){
            std::cout<<m_x<<", "<<m_y<<'\n';
        }
};

int main(){
    Foo foo{6, 7};
    foo.print();

    return 0;
}
