
output: main.o DiaryEntry.o DiaryManager.o Utilities.o
	g++ src\main.o src\DiaryEntry.o src\DiaryManager.o src\Utilities.o -o output.exe

main.o: src\main.cpp 
	g++ -c src\main.cpp -o src\main.o

DiaryEntry.o: src\DiaryEntry.cpp src\DiaryEntry.h
	g++ -c src\DiaryEntry.cpp -o src\DiaryEntry.o

DiaryManager.o: src\DiaryManager.cpp src\DiaryManager.h
	g++ -c src\DiaryManager.cpp -o src\DiaryManager.o

Utilities.o: src\Utilities.cpp src\Utilities.h
	g++ -c src\Utilities.cpp -o src\Utilities.o

clean:
	del /Q src\*.o *.exe

run:
	./output
