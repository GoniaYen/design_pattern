obv:main.o subject.o observer.o
	g++ -o obv main.o subject.o observer.o
main.o: Subject.h Observer.h main.cpp
	g++ -c -o main.o main.cpp
subject.o:Subject.h Subject.cpp
	g++ -c -o subject.o Subject.cpp
observer.o:Subject.h Observer.h Observer.cpp
	g++ -c -o observer.o Observer.cpp
clean:
	main.o subject.o observer.o