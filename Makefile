all:lab3A.cpp lab3B.o Clock.o
	g++ -o lab3A lab3A.cpp
	g++ -o lab3B lab3B.o Clock.o

lab3B.o:lab3B.cpp Clock.h
	g++ -c lab3B.cpp

Clock.o:Clock.cpp Clock.h
	g++ -c Clock.cpp
