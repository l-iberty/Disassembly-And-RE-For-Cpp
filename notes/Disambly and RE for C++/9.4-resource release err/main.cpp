#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class CMyString {
public:
	CMyString() {
		m_pString = new char[10];
		if (m_pString != NULL) {
			strcpy(m_pString, "Hello");
		}
	}
	~CMyString() {
		if (m_pString != NULL) {
			delete m_pString;
			m_pString = NULL;
		}
	}
	char * GetString() {
		return m_pString;
	}
private:
	char * m_pString;
};

void ShowMyString(CMyString MyString) {
	printf("CMyString: %s\n", MyString.GetString());
}

void main() {
	CMyString MyString;
	ShowMyString(MyString);
	ShowMyString(MyString);
}