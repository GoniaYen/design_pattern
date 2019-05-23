state:main.o work.o state.o
	g++ -o state main.o work.o state.o
work.o:Work.h Work.cpp State.h
	g++ -c -o work.o Work.cpp
state.o:State.h State.cpp
	g++ -c -o state.o State.cpp