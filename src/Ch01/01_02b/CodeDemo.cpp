// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

/**
 * using namespace std; is generally considered bad practice 
 * in proffesional production because it pollutes the global namespace
 * 
 * particularly problematic if using multiple namespaces.
 * 
 * better approach would be to explicitly qualify names you will use from 
 * stl.
 * ex: using std::cout;
 * 
 * I'm using it for the sake of brevity in the tutorials.
 */
using namespace std;
#include <iostream>

int main() 
{
    cout << "\n\nProgram Start\n" << endl;
    cout << "Hi There!\nHello World!" << endl;
    cout << "\n\n" << endl;
    return 0;
}

/**
 * Alternate Main Function
 * 
 * Uses C to do the same thing
 */
/*
#include <cstdio>

int main() 
{
    printf("Hey, There!\n");
    return 0;
}
*/