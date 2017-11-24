#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class CMyString {
public:
	CMyString() {
		m_pString = NULL;
	}
	CMyString(CMyString &obj) {
		// 注：若在拷贝构造函数内直接复制指针值，则两个对象的m_pString指向同一资源，属于浅拷贝
		// this->m_pString = obj.m_pString
		int nLen = strlen(obj.m_pString);
		this->m_pString = new char[(nLen + 1)*sizeof(char)];
		strcpy(this->m_pString, obj.m_pString);
	}
	~CMyString() {
		if (m_pString != NULL) {
			// 如果使用浅拷贝，将产生重复释放堆内存的错误
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
	int m_unused[10]; // 使对象的大小大于4字节，否则调用`ShowMyString`时会产生`push ecx`这样的不易理解的指令.
};

void ShowMyString(CMyString MyString) {
	printf("CMyString: %s\n", MyString.m_pString);
}

void main() {
	CMyString MyString;
	MyString.SetString("Hello");
	ShowMyString(MyString);
}