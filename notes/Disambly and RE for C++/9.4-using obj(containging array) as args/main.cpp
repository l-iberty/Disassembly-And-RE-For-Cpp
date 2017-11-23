#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class CFunTest {
public:
	int m_nOne;
	int m_nTwo;
	char m_szName[32];
};

void ShowFunTest(CFunTest FunTest) {
	printf("%d %d %s\n", FunTest.m_nOne, FunTest.m_nTwo, FunTest.m_szName);
}

void main() {
	CFunTest FunTest;
	FunTest.m_nOne = 1;
	FunTest.m_nTwo = 2;
	strcpy(FunTest.m_szName, "Name");
	ShowFunTest(FunTest);
}