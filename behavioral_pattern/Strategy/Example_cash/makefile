cash:main.o Cash.o Factory.o
	g++ -o cash main.o Cash.o Factory.o
main.o:main.cpp Factory.h Cash.h
	g++ -c -o main.o main.cpp
Cash.o:Cash.h Cash.cpp
	g++ -c -o Cash.o Cash.cpp
Factory.o:Factory.cpp Factory.h Cash.h
	g++ -c  -o Factory.o Factory.cpp