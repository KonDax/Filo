#include "Filo.hpp"

Filo::Filo(){
	size = 8;
	datalen = 0;
	ar = new int[size];
}

Filo::Filo(int newsize){
	size = newsize;
	datalen = 0;
	ar = new int[size];
}

Filo::~Filo(){
	delete [] ar;
}

int Filo::put_to_end(int el){
	if (datalen >= size)
		return 1;
	ar[datalen++] = el;
	return 0;
}

int Filo::get_from_end(int* el){
	if (datalen == 0)
		return 1;
	*el = ar[--datalen];
	return 0;
}

int Filo::flush(){
	datalen = 0;
	return 0;
}
