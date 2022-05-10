#include <iostream>
using namespace std;


int Plus(int* Array, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += Array[i];
	}

	return sum;

}
int main()
{ 

	int size = 0;

	cin >> size;

	int* Array = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> Array[i];
	
	}

	cout << Plus(Array, size) << endl;
		
	return 0;

}