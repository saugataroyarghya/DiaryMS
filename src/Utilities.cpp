#include "Utilities.h"
#include <iostream>

void Utilities::clearScreen()
{
    std::cout << "\033[2J\033[1;1H";
}