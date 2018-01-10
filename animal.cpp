/*********************************************************************
 ** Author: Jordan Hamilton
 ** Date: 01/08/2018
 ** Description: This program prompts the user to input the name of
 ** their favorite animal, then prints the user's input to the screen.
 *********************************************************************/

#include <iostream>
#include <string>

// a simple example program
int main()
{
    std::string faveAnimal;
    std::cout << "Please enter your favorite animal." << std::endl;
    std::cin >> faveAnimal;
    std::cout << "Your favorite animal is the " << faveAnimal;
    std::cout << "." << std::endl;

    return 0;
}
