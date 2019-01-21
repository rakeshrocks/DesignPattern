#include <iostream>
#include "itrator_factory.cc"
using namespace std;
int main() {
	int type;
	while (1) {
		cout << "Enter type of itrator to be created" << endl;
		cin >> type;
		Itrator *t = ItratorFactory::createItrator(type);
		if (t) {
			t->getItrator();
		}
	}	
	return 0;
}
