#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//r ���Ͽ� �����Ͽ� ������ �б�
//w ���Ͽ� �����Ͽ� ������ ��� (������ �����ϸ� ����� )
//a ���Ͽ� �����Ͽ� �����͸� �ڿ��� ���
int main(void) {
	char s[20] = "Hello World";
	FILE* fp;
	fp = fopen("temp.txt", "w");
	fprintf(fp, "%s\n", s);
	fclose(fp);
	return 0;
}