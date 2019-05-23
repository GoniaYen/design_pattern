cal:operation.o factory.o main.o
	g++ -o cal operation.o factory.o main.o
operation.o:operation.h operation.cpp
	g++ -c -o operation.o operation.cpp
factory.o:factory.h factory.cpp operation.h
	g++ -c -o factory.o factory.cpp
main.o:main.cpp operation.h factory.h
	g++ -c -o main.o main.cpp