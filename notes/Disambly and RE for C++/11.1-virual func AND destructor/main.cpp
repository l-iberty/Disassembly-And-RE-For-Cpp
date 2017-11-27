#include <stdio.h>

class CBase {
public:
	virtual void Show() {
		printf("CBase");
	}
	virtual ~CBase() {
		printf("~CBase\n");
	}
};
class CChild :public CBase {
public:
	void Show() {
		printf("CChild\n");
	}
	~CChild() {
		printf("~CChild\n");
	}
};
void main() {
	CBase *pBase = new CChild;
	pBase->Show();
	delete pBase;
}