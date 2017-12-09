#include <stdio.h>

class CBase {
public:
	CBase() {
		printf("CBase - ");
		Show();
	}
	virtual ~CBase() {
		printf("~CBase - ");
		Show();
	}
	virtual void ShowNumber() {
		m_nNumber = 5;
		printf("CBase: %d\n", m_nNumber);
	}
public:
	int m_nNumber;
private:
	virtual void Show() {
		ShowNumber();
	}
};

class CDevice :public CBase {
public:
	CDevice() {}
	~CDevice() {}
	void ShowNumber() override {
		m_nDevice = 6;
		printf("CDevice: %d\n", m_nDevice);
	}
public:
	int m_nDevice;
};

void main() {
	CBase *pBase = new CDevice;
	pBase->ShowNumber();
	delete pBase;
}