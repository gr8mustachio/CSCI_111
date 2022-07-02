#include <iostream>
#include "numcols.h"

void center_box (int how_wide, int width) {

	int half_wide = how_wide/2;
	for (int i=0; i < (half_wide - width); ++i) {
		
		std::cout << " ";
	}
}

void print_horizontal (int columns) {

	for (int i=0; i < columns; ++i) {
		std::cout << "*";
	}
	
}
void skip_mid (int columns) {

	for (int i=0; i < columns - 2; ++i) {
		std::cout << " ";
	}
}
void print_vertical (int height, int columns, int how_wide, int width) {

	for (int i=0; i < height - 2; ++i) {
	
		std::cout << std::endl;
		center_box (how_wide, width);
		std::cout << "*";
		skip_mid (columns);
		std::cout << "*";
	}
	std::cout << std::endl;
}
int main() {

	int height;
	int width;
	int columns;
	bool fit = true;

	int how_wide = get_screen_columns();
	std::cout << "Screen width = " << how_wide << std::endl;

	std::cout << "How tall is the box? ";
	std::cin >> height;
	std::cout << "How wide is the box? ";
	std::cin >> width;
	columns = width * 2;
	if (columns > how_wide) { 
		std::cout << "Screen too small!\n";
		fit = false;	
	}
	
	if (fit != false) {

		center_box (how_wide, width);
		print_horizontal (columns);
		print_vertical (height, columns, how_wide, width);
		center_box (how_wide, width);	
		print_horizontal (columns);
		std::cout << std::endl;	
	}

	return 0;

}
