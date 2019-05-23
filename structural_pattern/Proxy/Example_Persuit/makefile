proxy:main.o Proxy.o
	g++ -o proxy main.o Proxy.o
main.o:Proxy.h main.cpp
	g++ -c -o main.o main.cpp
Proxy.o:Proxy.h Proxy.cpp
	g++ -c -o Proxy.o Proxy.cpp