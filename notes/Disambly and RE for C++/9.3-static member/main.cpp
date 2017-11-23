#include <stdio.h>

class CStatic {
public:
	static int sm_nInt;
	int m_nInt;
};
int CStatic::sm_nInt = 0x12345678; // 静态数据成员初始化

void main() {
	CStatic a, b;
	int nSize = sizeof(a);
	printf("CStatic : %d\n", nSize);

	void *pa = &a;
	void *pb = &b;
	void *p1 = &a.sm_nInt;
	void *p2 = &a.m_nInt;
	void *p3 = &b.sm_nInt;
	void *p4 = &b.m_nInt;
}