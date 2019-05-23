str:main.o Context.o Strategy.o
	g++ -o str main.o Context.o Strategy.o
main.o:main.cpp Strategy.h Context.h
	g++ -c -o main.o main.cpp
context.o:Context.cpp Context.h Strategy.h
	g++ -c -o context.o Context.cpp 
strategy.o:Strategy.cpp Strategy.h
	g++ -c  -o Strategy.o Strategy.cpp 