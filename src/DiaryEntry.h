#ifndef DIARYENTRY_H
#define DIARYENTRY_H

#include <string>

class DiaryEntry 
{
    std::string date;
    std::string time;
    std::string message;
public:
    DiaryEntry(std::string date, std::string time, std::string message);
    std::string format();
};