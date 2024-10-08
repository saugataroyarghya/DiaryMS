# Diary Management Application

## Overview
This is a basic diary management application written in C++. It allows users to add, list, and search through diary entries, with a future plan for data encryption using a custom encryption method. Entries are saved to a file for persistent storage, and the project features a simple console-based user interface.

## Features
- Add new diary entries with a title, message, date, and time.
- List all diary entries and select one to view its details.
- Save diary entries to a file (with future encryption functionality).
- Clear the console for a clean user interface.

## Project Structure
- **DiaryEntry.cpp/.h**: Handles individual diary entry objects with title, message, date, and time.
- **DiaryManager.cpp/.h**: Manages the interaction with the user, handles adding and listing diary entries.
- **Utilities.cpp/.h**: Provides utility functions like getting the current date/time and clearing the screen.
- **Makefile**: Automates the build process.

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/diary-manager.git
   cd diary-manager
   ```

2. Compile the project using the Makefile:
   ```bash
   make output
   ```

3. Run the application:
   ```bash
   make run
   ```

4. Clean the directory (remove object files and executable):
   ```bash
   make clean
   ```

## Requirements
- g++ compiler (or any C++ compiler).
  
## Future Improvements
- Implement real encryption for diary entries using OpenSSL.
- Add search functionality to find entries based on title or content.

---
