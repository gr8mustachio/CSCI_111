
a16_5 : a16_5.o braille_to_letter.o
	g++ -std=c++17 -o a16_5 a16_5.o braille_to_letter.o

a16_5.o: a16_5.cpp braille_to_letter.h
	g++ -c -std=c++17 a16_5.cpp

braille_to_letter.o: braille_to_letter.cpp braille_to_letter.h
	g++ -c -std=c++17 braille_to_letter.cpp

clean:
	rm -f a16_5 a16_5.o  braille_to_letter.o
