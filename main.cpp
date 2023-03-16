#include "Filo.hpp"
#include <iostream>

int main(){

	Filo* filo;
	filo = new Filo(12);
	filo->put_to_end(4);
	filo->put_to_end(6);
	int el;
	filo->get_from_end(&el);
	std::cout << el << std::endl;

	delete filo;

	return 0;
}
