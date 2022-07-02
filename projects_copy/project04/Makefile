test_program: Weapon.o Knight.o Random.o test_program.o
	g++ Weapon.o Knight.o Random.o test_program.o -o test_program

test_program.o: test_program.cpp Weapon.h Knight.h Random.h
	g++ -c test_program.cpp

Random.o: Random.cpp Random.h
	g++ -c Random.cpp

Weapon.o: Weapon.cpp Weapon.h
	g++ -c Weapon.cpp

Knight.o: Knight.cpp Knight.h Weapon.h
	g++ -c Knight.cpp

clean:
	rm *.o test_program
