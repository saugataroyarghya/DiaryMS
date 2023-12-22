#ifndef DIARYENTRY_H
#define DIARYENTRY_H

#include <string>

class DiaryEntry 
{
    std::string date;
    std::string time;
    std::string title;
    std::string message;
public:
    void setDate(std::string date);
    void setTime(std::string time);
    void setTitle(std::string title);
    void setMessage(std::string message);
};


#endif // DIARYENTRY_H