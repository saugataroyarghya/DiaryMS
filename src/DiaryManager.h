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

public: 
    void interact();
    void list();
    void add();
    DiaryManager();
};

#endif