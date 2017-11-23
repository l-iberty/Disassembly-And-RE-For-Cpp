#include <stdio.h>

class CFunTest {
public:
	int m_nOne;
	int m_nTwo;
};

void ShowFunTest(CFunTest FunTest) {
	printf("%d %d\n", FunTest.m_nOne, FunTest.m_nTwo);
}

void main() {
	CFunTest FunTest;
	FunTest.m_nOne = 1;
	FunTest.m_nTwo = 2;
	ShowFunTest(FunTest);
}