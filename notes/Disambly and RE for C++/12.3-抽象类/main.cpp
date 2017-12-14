#include <stdio.h>

class CAbstractBase {
public:
	virtual void Show() = 0;
	virtual void Fuck() = 0;
};

class CAbstractChild :public CAbstractBase {
public:
	virtual void Show() {
		printf("CAbstractChild\n");
	}
	virtual void Fuck() {
		printf("Fuck!\n");
	}
};

void main() {
	CAbstractChild AbstractChild;
	CAbstractBase *pBase = &AbstractChild;
	pBase->Show();
	pBase->Fuck();
}