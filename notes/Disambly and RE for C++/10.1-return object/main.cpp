#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class CMyString {
public:
	CMyString() {
		m_pString = NULL;
	}
	CMyString(CMyString &obj) {
		int nLen = strlen(obj.m_pString);
		this->m_pString = new char[(nLen + 1)*sizeof(char)];
		strcpy(this->m_pString, obj.m_pString);
	}
	~CMyString() {
		if (m_pString != NULL) {
			delete m_pString;
			m_pString = NULL;
		}
	}
	void SetString(char *pString) {
		int nLen = strlen(pString);
		if (m_pString != NULL) {
			delete m_pString;
			m_pString = NULL;
		}
		this->m_pString = new char[(nLen + 1)*sizeof(char)];
		strcpy(this->m_pString, pString);
	}
	char *m_pString;
	int m_unused[10];
};

void ShowMyString(CMyString MyString) {
	printf("CMyString: %s\n", MyString.m_pString);
}

CMyString GetMyString() {
	CMyString MyString;
	MyString.SetString("World");
	return MyString;
}

CMyString* GetMyString2(CMyString* pMyString) {
	CMyString MyString;
	MyString.SetString("Hello,World");
	pMyString = &MyString;
	return pMyString;
}

void main() {
	CMyString MyString = GetMyString();
	CMyString MyString2;
	GetMyString2(&MyString2);
}