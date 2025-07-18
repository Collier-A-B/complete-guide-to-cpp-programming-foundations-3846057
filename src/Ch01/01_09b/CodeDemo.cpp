// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>
using std::string;
using std::cout; using std::endl; using std::cin; using std::flush;

int main(){
    string name;
    cout << "Enter your name: " << flush;
    cin >> name;

    cout << "\nHi There, " << name << "!" << endl;

    cout << endl << endl;
    return 0;
}