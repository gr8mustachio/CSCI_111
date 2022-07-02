#include<iostream>
#include<fstream>

using namespace std;

float average(float* array, int num_elements);

int main()
{
  float myFloats[30];
  cout << average(myFloats, 30) << endl;
  return 0;
}

float average(float* array, int num_elements)
{
  float total = 0.0;
  float average = 0.0;
  for(int i=0; i<num_elements; ++i){
    cin >> array[i];
    total += array[i];
  }
  average = total / (float)num_elements;
  return average;
}


