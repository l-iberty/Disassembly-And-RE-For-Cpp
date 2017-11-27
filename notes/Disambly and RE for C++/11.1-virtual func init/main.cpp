#include <stdio.h>

class CVirtual {
public:
	virtual int GetNumber() {
		return m_nNumber;
	}
	virtual void SetNumber(int nNumber) {
		m_nNumber = nNumber;
	}
	~CVirtual() {
		printf("~CVirtual\n");
	}
private:
	int m_nNumber;
};

void main() {
	CVirtual MyVirtual;
	MyVirtual.SetNumber(1);
	printf("CVirual: %d\n", MyVirtual.GetNumber());

	CVirtual *pVirtual = &MyVirtual;
	pVirtual->SetNumber(2);
}