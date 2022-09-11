#include <iostream>

#include "LinkedList.h"

using namespace std;

int main() {
	srand(time(0));

	List a;
	for (int i = 0; i < 10; ++i) {
		a.push_back(rand() % 100);
	}
	a.push_front(3);
	
	a.print();
	a.remove();
	a.push_back(44);
	a.print();
	std::cout<<a.find_node(44)<<std::endl;
	List b= a;
	List c = b;
	b.print();
	c.print();

	
	

	return 0;
}