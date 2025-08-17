#include <iostream>
#include <vector>

void printStack(const std::vector<int>& stack){
    if (stack.empty()){// checks whether the stack.size == 0
        std::cout<<"Empty";
    }

    for(auto element: stack){
        std::cout<<element<<' ';
    }

    std::cout<<"\tCapacity: "<<stack.capacity()<<" Length "<<stack.size()<<"\n";

}

int main(){
    std::vector<int> stack{};//empty stack

    printStack(stack);

    stack.push_back(1); //pushes an element on the stack
    printStack(stack);

    stack.push_back(2);
    printStack(stack);

    stack.push_back(3);
    printStack(stack);

    std::cout<<"Top: "<<stack.back()<<'\n';//returns the last(top) element inserted

    stack.pop_back();//pops an element off the stack
    printStack(stack);
    
    stack.pop_back();
    printStack(stack);

    stack.pop_back();
    printStack(stack);

    return 0;
}