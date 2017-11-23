#include <stdio.h>

class CStatic {
public:
	static int sm_nInt;
	int m_nInt;
	static void sm_SetNumber(int nInt);
	void SetNumber(int nInt);
};

int CStatic::sm_nInt = 0x12345678;

void CStatic::sm_SetNumber(int nInt)
{
	sm_nInt = nInt;
}

void CStatic::SetNumber(int nInt)
{
	m_nInt = nInt;
}

void main() {
	CStatic Static;
	Static.sm_SetNumber(5);
	Static.SetNumber(12);
	printf("CStatic : %d, %d\n", Static.sm_nInt, Static.m_nInt);
}