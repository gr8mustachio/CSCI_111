test_date: test_date.o Date.o
	g++ -std=c++11 Date.o test_date.o -o test_date
test_date.o: test_date.cpp Date.h
	g++ -std=c++11 -c test_date.cpp
Date.o: Date.cpp Date.h
	g++ -std=c++11 -c Date.cpp
clean:
	rm -f Date.o test_date.o test_date
