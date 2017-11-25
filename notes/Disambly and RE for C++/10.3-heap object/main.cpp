#include <stdio.h>

class CNumber {
public:
	CNumber() {
		m_nNumber = 1;
	}
	~CNumber() {
		printf("~CNumber\n");
	}
	int m_nNumber;
};

void main() {
	CNumber *pNumber = NULL;
	pNumber = new CNumber;
	pNumber->m_nNumber = 2;
	printf("CNumber: %d\n", pNumber->m_nNumber);
	if (pNumber != NULL) {
		delete pNumber;
		pNumber = NULL;
	}
}