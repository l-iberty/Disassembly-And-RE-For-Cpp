#include <stdio.h>

class CTest {
public:
	void SetNumber(int nNumber) {
		m_nInt = nNumber;
	}
public:
	int m_nInt;
};

void main() {
	CTest Test;
	Test.SetNumber(5);

	printf("CTest : %d\n", Test.m_nInt);
}