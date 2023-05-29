#include <iostream>
using namespace std;

class orang {
public:
	int umur;

	orang(input pUmur) :
		umur(pUmur)
	{
		cout << "orang dibuat dengan umur " << umur << "\n" endl;
	}
};