factory:Product.o Factory.o main.o
	g++ -o factory Product.o Factory.o main.o
Product.o:Product.h Product.cpp
	g++ -c -o Product.o Product.cpp
factory.o:Factory.h Factory.cpp Product.h
	g++ -c -o Factory.o Factory.cpp
main.o:main.cpp Product.h Factory.h
	g++ -c -o main.o main.cpp