template:main.o Template.o
	g++ -o template main.o Template.o
main.o:Template.h main.cpp
	g++ -c -o main.o main.cpp
Template.o:Template.h Template.cpp
	g++ -c -o Template.o Template.cpp