#include <iostream>
using namespace std;

int main() {

	int rows = 5, cols = 3;
	double** A;
	A = new double* [rows];
	for (int i = 0; i < rows; i++)
	{
		A[i] = new double[cols];
	} //dynamically creates a 5x3 matrix

	//create a 1000x1000 matrix
	/*
	int** A;
	A = new int* [1000];
	for (int i = 0; i < 1000; i++)
	{
		A[i] = new int[i + 1];
	}
	*/
	for (int i = 0; i < rows; i++)
	{
		delete[] A[i];
	} //frees up memory of columns

	

	return 0;
}