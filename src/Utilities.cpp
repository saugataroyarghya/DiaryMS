#include "Utilities.h"
#include <iostream>

void Utilities::clearScreen()
{
    std::cout << "\033[2J\033[1;1H";
}

std::string Utilities::currentDate()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::string date = std::to_string(ltm->tm_mday) + "/" + std::to_string(1 + ltm->tm_mon) + "/" + std::to_string(1900 + ltm->tm_year);
    return date;
}

std::string Utilities::currentTime()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std::string time = std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min) + ":" + std::to_string(ltm->tm_sec);
    return time;
}