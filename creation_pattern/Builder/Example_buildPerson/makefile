bldper:Person.o Builder.o Direct.o main.o
	g++ -o bldper Person.o Builder.o Direct.o main.o
Person.o:Person.h Person.cpp
	g++ -c -o Person.o Person.cpp
Builder.o:Person.h Builder.h Builder.cpp
	g++ -c -o Builder.o Builder.cpp
Direct.o:Direct.h Direct.cpp Builder.h
	g++ -c -o Direct.o Direct.cpp
main.o:main.cpp Person.h Direct.h Builder.h
	g++ -c -o main.o main.cpp