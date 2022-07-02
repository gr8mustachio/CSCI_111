test_counter: test_counter.o Webcounter.o
	g++ -std=c++11 -o test_counter test_counter.o Webcounter.o

test_counter.o: test_counter.cpp Webcounter.h
	g++ -std=c++11 -c test_counter.cpp

Webcounter.o: Webcounter.cpp Webcounter.h
	g++ -std=c++11 -c Webcounter.cpp

clean:
	rm test_counter test_counter.o Webcounter.o
