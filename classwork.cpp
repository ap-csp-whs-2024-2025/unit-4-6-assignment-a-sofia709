/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

// In-Class Examples
// greet procedure

// goodbye procedure


// TODO: Create squareNum
void sqaureNum(int n)
{
    std:: cout << "The square of " << n<< "is" << (n*n) <<std::endl;

}
// TODO: Create distance

// TODO: Create rollDice
void rollDice ()
{
    int randomNumber = rand () % 6+1;

    std:: cout << "You rolled a"<< randomnumber << std::endl; 
    
}

int main()
{
    //seed the random number generator with the current time
    srand(time)
   rollDice();
   rollDice();
   rollDice();
    
    
    return 0;
}
