#include <iostream>

int main() {

	char fl = 0;
	char sl = 0;
	char mid = 0;

	printf("Input 2 characters separated by spaces followed by enter: ");
	scanf_s("%c %c", &fl,1 , &sl,1);
	getchar(); // after each scan, we need a getchar to clear the newline that pressing enter created

	// What value goes into mid?
	fl = ((fl - 65)%32 + 65);
	sl = ((sl - 65)%32 + 65);
	mid = (fl + sl) / 2;




	printf(" Middle character is %c\n",mid);
	getchar(); // cause the program to stop and wait for the enter key to be pressed

	system("pause"); // another way to halt the program
}