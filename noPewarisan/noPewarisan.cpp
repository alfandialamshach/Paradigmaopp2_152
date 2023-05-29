#include <iostream>
using namespace std;

class baseClass final {
public:
	virtual void perkenalan() {
		cout << "Hello saya Fuction dari base class";
	}
};
class derivedClass : public baseClass {
public:
	void perkenalan() {
		cout << " Hello saya Function dari Derived class";
	}
};
int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
}