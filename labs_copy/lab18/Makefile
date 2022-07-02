try_weapon: Weapon.o Random.o try_weapon.o
	g++ Weapon.o Random.o try_weapon.o -o try_weapon

try_weapon.o: try_weapon.cpp Weapon.h
	g++ -c try_weapon.cpp

Random.o: Random.cpp Random.h
	g++ -c Random.cpp

Weapon.o: Weapon.cpp Weapon.h
	g++ -c Weapon.cpp

clean:
	rm *.o try_weapon
