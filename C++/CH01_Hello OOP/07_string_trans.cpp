#include <iostream> //����� ǥ�� ���̺귯��
#include <string>
using namespace std;

int main(void) {
	int i = 123;
	string s = to_string(i);
	cout << "���� -> ���ڿ�: " << s << endl;
	s = "456";
	cout << "���ڿ� -> ����: " << i << endl;
	system("pause");
	return 0;
}