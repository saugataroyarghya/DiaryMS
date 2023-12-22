#ifndef DIARYMANAGER_H
#define DIARYMANAGER_H

#include "DiaryEntry.h"
#include <vector>
#include <iostream>

class DiaryManager
{
   std::vector<DiaryEntry> entries;

public: 
    void interact();
    void list();
    void add();
};

#endif