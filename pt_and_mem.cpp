#include<iostream>
using namespace std;

int main() {

	int total_sum = 10;
	double y, z;
	double* p_x;
	z = 3.0;
	p_x = &z;
	y = *p_x + 1.0;
	cout << &total_sum << endl;
	cout << "Y: " << y << " Z:" << z << " PTR:" << p_x << endl;
	return 0;
}