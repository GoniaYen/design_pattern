Builder:Product.o Builder.o Director.o main.o
	g++ -o Builder Product.o Builder.o Director.o main.o
Product.o:Product.h Product.cpp
	g++ -c -o Product.o Product.cpp
Builder.o:Product.h Builder.h Builder.cpp
	g++ -c -o Builder.o Builder.cpp
Director.o:Director.h Director.cpp Builder.h
	g++ -c -o Director.o Director.cpp
main.o:main.cpp Product.h Director.h Builder.h
	g++ -c -o main.o main.cpp