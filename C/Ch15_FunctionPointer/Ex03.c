#include <stdio.h>

int add(int a ,int b) {
	return a + b;
}
void sub(int a, int b) {
	return a - b;
}

int main(void) {
	int (*fp)(int,int) = add;
	printf("%d\n",fp(10,3));
	fp = sub;
	printf("%d\n", fp(10, 3));
	system("pause");
	return 0;
}