#ifndef _Filo_h_
#define _Filo_h_

class Filo
{
private:
	int *ar;
	int size;
	int datalen;
public:
	int put_to_end(int);
	int get_from_end(int*);
	int flush();
	Filo();
	Filo(int);
	~Filo();
};

#endif
