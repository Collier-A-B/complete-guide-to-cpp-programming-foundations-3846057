// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
/**
 * texture == 0, sound == 1, animation == 2, script == 3
 */

/**
 *  bad enum solution
 *  
 * causes whole bunch of problems
 */ 
// enum asset_type {texture, sound, animation, script}; // c style enum
// enum menu_section {background, music, sound, controls, textures}; // c style enum

/**
 * class enumerations
 * 
 * recommended approach
 */
enum class asset_type {texture, sound, animation, script}; 
enum class menu_section {background, music, sound, controls, textures};

int main(){
    int sound = 8;  // overrides asset_type sound in c style enum
    asset_type asset_value;

    asset_value = asset_type::sound;

    std::cout << "asset_value = " << (int) asset_value << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
