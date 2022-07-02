#include <iostream>
#include <string>
#include "numcols.h"

using namespace std;

void draw_full_row(int spacing, int box_width)
{
	// string function prevents us from having to make a loop to print out
	// each character individually
	cout << string(spacing, ' '); // indent to center of screen
	cout << string(box_width, '*') << endl;
}

void draw_hollow_row(int spacing, int box_width)
{
	cout << string(spacing, ' ');
	cout << '*';
	cout << string(box_width - 2, ' ');
	cout << '*' << endl;
}

int main()
{
	int screen_width = get_screen_columns();
	int box_height, box_width;

	cout << "How tall is the box? ";
	cin >> box_height;
	cout << "How wide is the box? ";
	cin >> box_width;

	box_width = box_width * 2;

	if(box_width >= screen_width)
	{
		cout << "Screen to small!" << endl;
		return 1;
	}

	int spacing = (screen_width - box_width) / 2;

	draw_full_row(spacing, box_width);
	
	for(int i = 0; i < box_height - 2; i++)
	{
		draw_hollow_row(spacing, box_width);
	}
	
	draw_full_row(spacing, box_width);

	return 0;
}
