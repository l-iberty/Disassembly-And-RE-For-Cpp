#include <stdio.h>

class CNumber {
public:
	CNumber() {
		m_nNumber = 1;
	}
	int m_nNumber;
};
void main() {
	CNumber *pNumber = NULL;
	pNumber = new CNumber;
	pNumber->m_nNumber = 2;
	printf("CNumber: %d\n", pNumber->m_nNumber);
}