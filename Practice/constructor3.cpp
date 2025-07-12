#include <iostream>
#include <string_view>
#include <string>

class IntPair{
    private:
        int m_x{};
        int m_y{};
    public:
        IntPair(int x, int y)
            :m_x{x}, m_y{y}
        {}
    int x() const{return m_x;}
    int y() const{return m_y;}
};

void print(IntPair p){
    std::cout<<"( "<<p.x()<<", "<<p.y()<<" )\n";
}

int main(){
    //Case 1: pass variable, we instantiate p and then passing it to function as a variable, bercause we are only using it once there is no need since our function accepts rvalues
    IntPair p{3,4};
    print(p);

    //Case 2 construct temporary IntPair and pass to function
    print(IntPair{5,6});

    //case 3 Implicitly convert {7,8} to a temporary IntPair and pass it to function
    print({7,8});

    return 0;
}