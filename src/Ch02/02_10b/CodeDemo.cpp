// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float target_x;
    int32_t sprite_x;
    unsigned player_x;

    target_x = -123.45;  // assign double to float
    sprite_x = target_x; // truncates the decimal point and all numbers after (-123)
    player_x = sprite_x;

    std::cout << "Target X (float): " << target_x << std::endl;
    std::cout << "Sprite X (int32_t): " << sprite_x << std::endl;
    std::cout << "Player X (uint32_t): " << player_x << std::endl;
    std::cout << "Player X (signed): " << static_cast<int32_t>(player_x) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
