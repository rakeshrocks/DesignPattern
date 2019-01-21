#include<iostream>
using namespace std;

class Itrator {
protected:
	string name;
public:
	virtual void getItrator() = 0;
	virtual void setLabel() = 0;
};

class Inode:public Itrator {
	void getItrator() {
		cout << "Name of the Itrator is:" << name << endl;
	}
	void setLabel() {
		name = "Inode";
	}
};
class Dirent:public Itrator {
	void getItrator() {
		cout << "Name of the Itrator is:" << name << endl;
	}
	void setLabel() {
		name = "Dirent";
	}
};
class ItratorFactory {
public:
	static Itrator * createItrator(int type) {
		Itrator *itr = nullptr;
		switch (type) {
			case 1:
				itr = new Inode;
				break;
			case 2:
				itr = new Dirent;
				break;
			default:
				cout << "Wrong type sepecified";
				return NULL;
		}
		itr->setLabel();
		return itr;
	}
};
