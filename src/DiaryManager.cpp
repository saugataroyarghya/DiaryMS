#include "DiaryManager.h"
#include <iostream>

void DiaryManager::interact()
{
    while(1)
    {
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Diary Manager" << std::endl;
        std::cout << "------------------" << std::endl;
        std::cout << "1. Add new entry" << std::endl;
        std::cout << "2. List all entries" << std::endl;
        std::cout << "3. Search entries" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Choose an option: ";

        int option;
        std::cin >> option;

        switch(option)
        {
            case 1:
                std::cout << "Add new entry" << std::endl;
                this->add();
                break;
            case 2:
                std::cout << "List all entries" << std::endl;
                this->list();
                break;
            case 3:
                std::cout << "Search entries" << std::endl;
                break;
            case 4:
                std::cout << "Quit" << std::endl;
                return;
            default:
                std::cout << "Invalid option" << std::endl;
                break;
        }
    }
}

void DiaryManager::list()
{
    int i = 0;
    std::cout<<std::endl;
    for (auto entry : this-> entries)
    {
        std::cout << i <<": "<< entry.getTitle() << std::endl;
        i++;
    }
}

void DiaryManager::add()
{
    DiaryEntry newEntry;
    std::string title;
    std::string message;
    std::cout << "Title: ";
    std::cin.ignore();
    std::getline(std::cin, title);
    std::cout << "Message: ";
    std::getline(std::cin, message);
    newEntry.setTitle(title);
    newEntry.setMessage(message);
    this->entries.push_back(newEntry);
}