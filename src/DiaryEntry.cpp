#include "DiaryEntry.h"
#include <string>

//getter and setter methods
void DiaryEntry::setDate(std::string date)
{
    this->date = "placeholder"; // TODO: remove
}
void DiaryEntry::setTime(std::string time)
{
    this->time = "placeholder"; // TODO: remove
}
void DiaryEntry::setTitle(std::string title)
{
    this->title = title;
}
void DiaryEntry::setMessage(std::string message)
{
    this->message = message;
}
std::string DiaryEntry::getDate()
{
    return this->date;
}
std::string DiaryEntry::getTime()
{
    return this->time;
}
std::string DiaryEntry::getTitle()
{
    return this->title;
}
std::string DiaryEntry::getMessage()
{
    return this->message;
}
