lab15: Date.o Time.o lab15.o
	g++ Date.o Time.o lab15.o -o lab15

lab15.o:
	g++ -c lab15.cpp

Date.o: Date.cpp Date.h
	g++ -c Date.cpp

Time.o: Time.cpp Time.h
	g++ -c Time.cpp

clean:
	rm *.o lab15


