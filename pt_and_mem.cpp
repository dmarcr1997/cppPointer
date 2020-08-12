#include<iostream>
using namespace std;

int main() {

	int total_sum = 10;
	double y, z;
	double* p_x;
	double* p_y;

	p_y = new double;
	*p_y = 1.0;
	z = 3.0;
	p_x = &z;
	y = *p_x + 1.0;
	cout << &total_sum << endl;
	cout <<"PTY:"<< p_y << " Y: " << y << " Z:" << z << " PTR:" << p_x << endl;
	delete p_y;
	cout << *p_y << endl; //releases value should return 0
	
	return 0;
}