stock:main.o stock.o
	g++ -o stock main.o stock.o
main.o:main.cpp Stock.h
	g++ -c -o main.o main.cpp
stock.o:Stock.h Stock.cpp
	g++ -c -o stock.o Stock.cpp
