#include<iostream>
using namespace std;

int main() {
	double* x;
	double* y;
	x = new double[10];
	y = new double[10];

	for (int i = 0; i < 10; i++)
	{
		x[i] = ((double)(i));
		y[i] = 2.0 * x[i];
		cout << x[i] << " " << y[i] << endl;
	}
	delete[] x;
	delete[] y;

	return 0;
	
}