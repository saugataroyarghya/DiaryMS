#include "DiaryManager.h"
#include <iostream>

DiaryManager::DiaryManager()
{
    std::cout<<"Welcome to the Diary"<<std::endl;
    util->clearScreen();
}

void DiaryManager::interact()
{
    while(1)
    {
        
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
    int i = 1;
    std::cout<<std::endl;
    for (auto entry : this-> entries)
    {
        std::cout << i <<": "<< entry.getTitle() << std::endl;
        i++;
    }
    std::cout<<"------------------"<<std::endl;

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
    newEntry.setDate(util->currentDate());
    newEntry.setTime(util->currentTime());
    this->entries.push_back(newEntry);
    
    std::cout << "Entry added successfully" << std::endl;

}