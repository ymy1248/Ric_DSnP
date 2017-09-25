all: p1a

p1a: hw1.2.p1a.h hw1.2.p1a.cpp hw1.2.p1a.main.cpp
	g++ -std=c++11 -o hw1.2.p1a.out hw1.2.p1a.main.cpp hw1.2.p1a.cpp

p1b: hw1.2.p1b.h hw1.2.p1b.cpp hw1.2.p1b.main.cpp
	g++ -std=c++11 -o hw1.2.p1b.out hw1.2.p1b.main.cpp hw1.2.p1b.cpp

bug: hw1.2.p1.bug.cpp hw1.2.p1a.h hw1.2.p1a.cpp
	g++ -std=c++11 -o hw1.2.p1.bug.out hw1.2.p1.bug.cpp hw1.2.p1a.cpp

clean:
	rm *.out
