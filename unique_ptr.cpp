#include<memory>
#include<cassert>
using namespace std;

int main() {
	unique_ptr<int> p_x(new int);
	*p_x = 5;

	int* p_y = p_x.get();

	unique_ptr<int> p_z;
	
	p_z = move(p_x);
	assert(p_z);
	assert(!p_x);
	p_z.reset();
	assert(!p_z);
	return 0;
}