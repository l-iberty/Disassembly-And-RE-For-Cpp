#include <stdio.h>

class CFurniture {
public:
	CFurniture() {
		m_nPrice = 0;
	}
	virtual ~CFurniture() {
		printf("virtual ~CFurniture\n");
	}
	virtual int GetPrice() {
		return m_nPrice;
	}
protected:
	int m_nPrice;
};

class CSofa :virtual public CFurniture {
public:
	CSofa() {
		m_nPrice = 1;
		m_nColor = 2;
	}
	virtual ~CSofa() {
		printf("virtual ~CSofa\n");
	}
	virtual int GetColor() {
		return m_nColor;
	}
	virtual int SitDown() {
		return printf("Sit down and rest your legs\n");
	}
protected:
	int m_nColor;
};

class CBed :virtual public CFurniture {
public:
	CBed() {
		m_nPrice = 3;
		m_nLength = 4;
		m_nWidth = 5;
	}
	virtual ~CBed() {
		printf("virtual ~CBed\n");
	}
	virtual int GetArea() {
		return m_nLength*m_nWidth;
	}
	virtual int Sleep() {
		return printf("Go to sleep\n");
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
		printf("virtual ~CSofaBed\n");
	}
	virtual int SitDown() {
		return printf("Sit down on the sofa bed\n");
	}
	virtual int Sleep() {
		return printf("go to sleep on the sofa bed\n");
	}
	virtual int GetHeight() {
		return m_nHeight;
	}
protected:
	int m_nHeight;
};

void main() {
	CSofaBed SofaBed;
}