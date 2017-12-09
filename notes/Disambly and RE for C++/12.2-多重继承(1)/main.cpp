#include <stdio.h>

class CSofa {
public:
	CSofa() {
		m_nColor = 2;
	}
	virtual ~CSofa() {
		printf("virtual ~CSofa()\n");
	}
	virtual int GetColor() {
		return m_nColor;
	}
	virtual int SitDown() { // �� CSofaBed ��д
		return printf("Sit down and rest your legs\n");
	}
protected:
	int m_nColor;
};

class CBed {
public:
	CBed() {
		m_nLength = 4;
		m_nWidth = 5;
	}
	virtual ~CBed() {
		printf("virtual ~CBed()\n");
	}
	virtual int GetArea() {
		return m_nLength*m_nWidth;
	}
	virtual int Sleep() { // �� CSofaBed ��д
		return printf("go to sleep\n");
	}
protected:
	int m_nLength;
	int m_nWidth;
};

class CSofaBed :public CSofa, public CBed {
public:
	CSofaBed() {
		m_nHeight = 6;
	}
	virtual ~CSofaBed() {
		printf("virtual ~CSofaBed()\n");
	}
	virtual int SitDown() { // ��д CSOfa::SitDown()
		return printf("Sit down on the sofa bed\n");
	}
	virtual int Sleep() { // ��д CBed::Sleep()
		return printf("go to sleep on the sofa bed\n");
	}
	virtual int GetHight() {
		return m_nHeight;
	}
protected:
	int m_nHeight;
};

void main() {
	CSofaBed SofaBed;
	CSofa *pSofa = &SofaBed;
	CBed *pBed = &SofaBed;
	pSofa->SitDown();
	pBed->Sleep();
}