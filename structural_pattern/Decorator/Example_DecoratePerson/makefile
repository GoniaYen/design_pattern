person:main.o Person.o
	g++ -o person main.o Person.o
main.o:main.cpp Person.h
	g++ -c -o main.o main.cpp
Person.o:Person.h Person.cpp
	g++ -c -o Person.o Person.cpp