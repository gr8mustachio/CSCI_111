#include <cstdlib>
#include <iostream>
#include "numcols.h"
using namespace std;

int _column, _row, how_wide, i, x, y;

void column_row();

int main()
{
	   how_wide=get_screen_columns();
   	cout << "Screen width=" << how_wide << endl;
       column_row();	
    	
   return 0;
}

//Functions
	void column_row(){
	cout <<"How tall is the box?  \n";
	cin >>_row;
	cout <<"How wide is the box? \n";
	cin>> _column;
//Check to see if Box Width is bigger than screen
	if (_column>how_wide/3){
		cout<<"Screen to small\n";
	}else{
//----------------Centering	
			for(y=0; y<how_wide/3;y++){
        	cout<<" ";
        	}
//----------------Centering

//Setup for top column	
	for (i=0; i <+_column*2; i++){
	cout <<"*";
	}
	cout<<"\n";
	
//Setup for left row
	for (i=0; i<_row; i++){
//----------------Centering
		    for(y=0; y<how_wide/3;y++){
        	cout<<" ";
        	}
//----------------Centering
		cout <<"*";
//Setup for right row with spaces in between
		for (x = 0; x < _column*2-2; x++){
            cout << " ";
        }
		cout <<"*\n";
	}
	
//----------------Centering
for(y=0; y<how_wide/3;y++){
        	cout<<" ";
        	}
//----------------Centering

//Setup for bottom column
	for (i=0; i < _column*2; i++){
	cout <<"*";
	}
	cout<<"\n";
		}
	}
