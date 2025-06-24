#include <iostream>
/*
Namespaces --> Provides a solution in avoiding conflicting variable names in large projects. Each entity gets a unique
               name. A namespace allows for two different variables to have the same name, they must have different namespaces.
*/

namespace first{
    int x = 0;
}

namespace second{
    int x = 1;
}

/*int main(){

    std::cout<< second::x;

    return 0;
}
*/

int main(){
    using namespace second;
    std::cout<<x;
    return 0;
}