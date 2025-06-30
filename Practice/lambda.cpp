/* 
A mechanism to set up annonymous functions (without names). Once we have them set up,we can either give them names and call them
or we can even get them to do to do thingd directly'

Lambda functions signature :

    [capture list] (parameters) -> return type{
        //function body
    };
*/
#include <iostream>

int main(){

    /*Decclaring a lambda function and calling it, you use auto if you did not specify return type
    auto func = [](){       // you don't need to sepcify the return type the compiler will do it for you
        std::cout<<"Hello world\n";
    };
    func();
    */

    // Declare a lambda function and call it directly
    /*
    [](){
        std::cout<<"Hello world!\n";
    }();
    */

    //A lambda function with parameters
    /*
    double func =[](double a, double b)-> double{
        std::cout<<"Results: "<<a<<" + "<<b<<" = "<<a+b<<'\n';
    }(1.3, 1.9);
    */

    // using the capture list of the lambda function
    /*
    int a{8};
    int b{10};
    auto func = [a,b](){ // a capture list is for using variables that are outside the scope of our lambda function
        return a+b;
    };
    
    std::cout<<"Results: "<<func()<<'\n';
    */
   // capture list
   /*
   int a{5};
   int b{10};
   auto func = [&](){// using '=' you are capturing by value and using '&' you are capturing by reference
    std::cout<<"Lambda: "<<a+b<<'\n';
   };

   for(size_t i{}; i<5; i++){
    a++;
    std::cout<<"Loop: "<<a+b<<'\n';
    func();
   }
    */

    return 0;
}

