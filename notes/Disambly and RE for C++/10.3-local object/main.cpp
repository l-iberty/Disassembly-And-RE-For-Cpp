#include <stdio.h>

class CNumber {
public:
	CNumber() {
		m_nNumber = 1;
	}
	~CNumber() {
		printf("~CNumber\n");
	}
	int m_nNumber;
};

void main() {
	CNumber Number;
}