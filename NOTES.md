# Personal Notes

# Chapter 2
## Qualifiers
- const: used to declare variables in which the value cannot be changed after declaration
- volatile: tells compiler that variables value may change at any time, without having been changed by the code
    - often used in embedded systems or multithreaded programs
    - example use case is when working with hardware registers or memory-mapped I/O
- mutable: allows a member of an object to be modified even if object is declared const
    - usefule if an objects internal state needs to be modifiable even if the object is declared const
```
class Player{
public:
    void updateScore() const{
        ++score;
    }

private:
    mutable int score = 0;
};

int main() {
    const Player player1 = Player();
}
```
- inline: tells the compiler to generate a copy of functions code at each point function is called
  instead of a normal function call
- constexpr: indicate that value of variable or result of function can be evaluated at compile time.
- qualifiers can be combined to create more specific constraints (ex. const and constexpr)
- *static: not a qualifier, but important. 
    - allows variables to exist for the duration of the program, not just the scope 
   its declared in. 
   - when used on class members, it makes that variable shared among all instances of the class. 
   - static functions change their linkage, meaning the function can only be accessed within the file its declared.

## Type Aliases
- typedef: creates an alias for an existing type (another way to refer to it)
    - visually simplifies complex type definitions/declarations
    - Improves readability and maintainability
```
typedef unsigned long Score;
Score highScore = 0;
Score player1_score = 0;
```
- using: 
    - serves same function as typedef, but more up to date (recommended)
    - supports template aliases
```
using Score = unsigned long;
/* Same as previous example*/
```

- comparison
```
typedef struct GameCharacter* (*CharacterCreator)(int);

using CharacterCreator = struct GameCharacter* (*)(int);
```

## Enumerations
- Enum: A list of named integer constants (generally not recommended)
    - Usually operate in global scope (same as global variables)
    - Limited type safety
- Enum Classes: Scoped or strongly typed version of Enum
    - Encapsulated within a class scope
    - Type safety enforced


## Structures (structs)
- Containers of heterogeneous data members
    - convention is that only used to hold related data
- available in C or c++

## Type Casting
- Specifying how to interpret a piece of data
- useful for converting data types
    - ex. convert int32_t to float
- C style cast: 
```
(float) (expression)
```
- C++ style cast: (recommended)
```
static_cast<float>(expression)
```
