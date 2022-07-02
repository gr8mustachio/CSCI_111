#include<iostream>
#include "numcols.h"
using namespace std;
int main()
{

	int screen= get_screen_columns();

	int height = 0;
	int width = 0;
	cout<<"How tall do you want your box?\n";
	cin>>height;
	cout<<"How wide do you want the box?\n";
	cin>>width;
	width = 2 * width; 
	screen = screen /2 - width/2;

	for(int i=0; i<screen; ++i)
		cout<<" ";
	for(int i=0; i<width; ++i)
		cout<<"*";
	cout<<"\n";

	for(int i=0; i<height-2; ++i){
		for(int i=0; i<screen; ++i)
			cout<<" ";
		cout<<"*";

		for(int i=0; i<width-2; ++i)
			cout<<" ";
		cout<<"*"<<endl;
	}
	for(int i=0; i<screen; ++i)
		cout<<" ";
			for(int i=0; i<width; ++i)
				cout<<"*";
	cout<<"\n";

	return 0;
}
