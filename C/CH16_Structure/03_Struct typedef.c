#include <stdio.h>

typedef struct Student { //구조체 정의
	char studentId[10];
	char name[10];
	int grade;
	char major[51];
} Student;

int main(void) {
	Student s = { "13214221" ,"이이이" ,3,"전자" };
	printf("학번:%s\n", s.studentId);
	printf("이름:%s\n", s.name);
	printf("학년:%d\n", s.grade);
	printf("학과:%s\n", s.major);
	system("pause");
	return 0;
}