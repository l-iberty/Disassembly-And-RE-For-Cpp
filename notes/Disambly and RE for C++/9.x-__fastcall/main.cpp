#include <stdio.h>

int __fastcall sum(int a, int b, int c, int d, int e) {
	int s = a + b + c + d + e;
	return s;
}

void main() {
	int s;
	s = sum(1, 2, 3, 4, 5);
}