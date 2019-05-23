facade:main.o facade.o
	g++ -o facade main.o facade.o
main.o:main.cpp Facade.h
	g++ -c -o main.o main.cpp
facade.o:Facade.h Facade.cpp
	g++ -c -o facade.o Facade.cpp
clean:
	$(RM)*.o