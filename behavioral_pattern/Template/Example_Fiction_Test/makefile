testpaper:main.o TestPaper.o
	g++ -o testpaper main.o TestPaper.o
main.o:main.cpp TestPaper.h
	g++ -c -o main.o main.cpp
TestPaper.o:TestPaper.h TestPaper.cpp
	g++ -c -o TestPaper.o TestPaper.cpp