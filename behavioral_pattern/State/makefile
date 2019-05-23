state:main.o context.o state.o
	g++ -o state main.o context.o state.o
context.o:Context.h Context.cpp State.h
	g++ -c -o context.o Context.cpp
state.o:State.h State.cpp
	g++ -c -o state.o State.cpp