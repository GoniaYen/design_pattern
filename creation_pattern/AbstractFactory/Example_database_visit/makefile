db_vistor:main.o Product.o AbstractFactory.o
	g++ -o db_vistor main.o Product.o AbstractFactory.o
main.o:AbstractFactory.h Product.h main.cpp
	g++ -c -o main.o main.cpp
Product.o:Product.cpp Product.h
	g++ -c -o Product.o Product.cpp
AbstractFactory.o:Product.h AbstractFactory.h AbstractFactory.cpp
	g++ -c -o AbstractFactory.o AbstractFactory.cpp