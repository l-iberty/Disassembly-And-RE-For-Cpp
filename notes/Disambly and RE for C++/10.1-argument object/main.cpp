#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class CMyString {
public:
	CMyString() {
		m_pString = NULL;
	}
	CMyString(CMyString &obj) {
		// ע�����ڿ������캯����ֱ�Ӹ���ָ��ֵ�������������m_pStringָ��ͬһ��Դ������ǳ����
		// this->m_pString = obj.m_pString
		int nLen = strlen(obj.m_pString);
		this->m_pString = new char[(nLen + 1)*sizeof(char)];
		strcpy(this->m_pString, obj.m_pString);
	}
	~CMyString() {
		if (m_pString != NULL) {
			// ���ʹ��ǳ�������������ظ��ͷŶ��ڴ�Ĵ���
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
	int m_unused[10]; // ʹ����Ĵ�С����4�ֽڣ��������`ShowMyString`ʱ�����`push ecx`�����Ĳ�������ָ��.
};

void ShowMyString(CMyString MyString) {
	printf("CMyString: %s\n", MyString.m_pString);
}

void main() {
	CMyString MyString;
	MyString.SetString("Hello");
	ShowMyString(MyString);
}