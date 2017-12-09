#include <stdio.h>

class CBase {
public:
	CBase() {
		printf("CBase\n");
	}
	~CBase() {
		printf("~CBase\n");
	}
	void SetNumber(int nNumber) {
		m_nNumber = nNumber;
	}
	int GetNumber() {
		return m_nNumber;
	}
private:
	int m_nNumber;
};

class CDevice :public CBase {
public:
	CDevice() {
		printf("CDevice\n");
	}
	~CDevice() {
		printf("~CDevice\n");
	}
	void ShowNumber(int nNumber) {
		SetNumber(nNumber);
		m_nDevice = nNumber + 1;
		printf("%d\n", GetNumber());
		printf("%d\n", m_nDevice);
	}
private:
	int m_nDevice;
};

void main() {
	CDevice Device;
	Device.ShowNumber(5);
}