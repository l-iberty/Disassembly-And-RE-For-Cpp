#include <stdio.h>

class CReturn {
public:
	int m_nNumber;
	int m_nArray[10];
};

CReturn GetCReturn() {
	CReturn RetObj;
	RetObj.m_nNumber = 0x12345678;
	for (int i = 0;i < sizeof(RetObj.m_nArray) / sizeof(RetObj.m_nArray[0]);i++) {
		RetObj.m_nArray[i] = i + 1;
	}
	return RetObj;
}

void main() {
	CReturn objA;
	objA = GetCReturn();
	printf("CReturn : %X %d %d\n", objA.m_nNumber, objA.m_nArray[0], objA.m_nArray[9]);

	int number = GetCReturn().m_nNumber;
}