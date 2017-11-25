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
	int m_unused[10];
};

void main() {
	CNumber *pArray = new CNumber[2];
	if (pArray != NULL) {
		delete[] pArray;
		pArray = NULL;
	}

	CNumber *pAarry2 = new CNumber[2];
	if (pAarry2 != NULL) {
		delete pAarry2;
		pAarry2 = NULL;
	}
}