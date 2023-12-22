#ifndef DIARYMANAGER_H
#define DIARYMANAGER_H

#include "DiaryEntry.h"
#include "Utilities.h"
#include <vector>
#include <iostream>

class DiaryManager
{
    std::vector<DiaryEntry> entries;
    Utilities* util = new Utilities();

    std::string encryptData(std::string data);
    std::string decryptData(std::string data);

public: 
    void interact();
    void list();
    void add();
    DiaryManager();
};

#endif