#include <iostream>
using namespace std;
// finding how many computations it will take to get to the integer 1 for any given positive integer
int algo(int input);
int main() {
    int input;// for user to input the given integer they want
    cout << "Enter number: ";
    cin >> input;

    if (input == 0) {
        cout << "Zero is not allowed.\n";// if the user enters 0 the program will stop
        return 1;//1 is used to end the main function prematurely
    }

    if (input < 0) {
        input = -input;// functions like an absolute value, no negative integers are allowed |input|
    }

    int results = algo(input);// Calling the function that will return the computations
    cout << "It took " << results << " computations to reach 1\n";

    return 0;
}

int algo(int input) {
    int counter{};// it will count the amount of computations the algorithm makes
    std::cout << "Sequence: " << input;
    while (input != 1) {
        if (input % 2 == 0) {// finding even integers and dividing them by two
            input /= 2;
        } else {  // will take odd integers and multiply them by 3 and add 1 afterwards
            input = (input * 3) + 1;
        }
        std::cout << " -> " << input;
        counter++;
    }
    std::cout << '\n';
    return counter;
}


