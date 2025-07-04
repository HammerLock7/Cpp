#include <iostream>

template <typename T>
T add(T x, T y){
    return x+y;
}
int add(int x, int y){
    return x-y;
}
int main(){

    std::cout<<add<int>(1,3)<<'\n';
    std::cout<<add<>(3,5)<<'\n';
    std::cout<<add(5,5)<<'\n';
    return 0;
}