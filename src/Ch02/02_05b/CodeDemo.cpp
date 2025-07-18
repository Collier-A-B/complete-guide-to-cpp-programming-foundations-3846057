// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

// global variables
// generally a bad idea
int a, b = 5;

int main(){
    // local variable
    bool my_flag;
    a = 7;
    my_flag = false;
    
    std::cout << "a == " << a << std::endl;
    std::cout << "b == " << b << std::endl;
    std::cout << "my_flag == " << my_flag << std::endl;     // outputs as 0

    my_flag = true;

    std::cout << "my_flag == " << my_flag << std::endl;
    std::cout << "a + b == " << a+b << std::endl;
    std::cout << "b - a == " << b-a << std::endl;

    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned) == " << positive << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
