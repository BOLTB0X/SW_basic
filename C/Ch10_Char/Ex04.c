#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//오류 버퍼로 해결
	//남아 있는 입력 버퍼를 항상 지우기 가능
	int a;
	char c;
	scanf("%d", &a);
	printf("%d\n", a);
	int temp;
	//한 자씩 받아서 파일의 끝이거나 개행 문자를 만나면
	//입력을 멈추므로 항상 입력 버퍼를 비움
	while ((temp=getchar()) !=EOF && temp !='\n'){ }
	scanf("%c",&c);
	printf("%c\n", c);
	system("pause");
	return 0;
}