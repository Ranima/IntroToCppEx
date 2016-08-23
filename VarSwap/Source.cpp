#include <iostream>

int main() {
	int a = 1;
	int s = 1;
	int r = 1;

	// accepts user input
	scanf_s("%d %d", &a, &s);
	r = a;
	a = s;
	s = r;

	printf("\n");

	// echo user input back
	printf("%d %d", a, s);

	getchar();
	getchar();
}