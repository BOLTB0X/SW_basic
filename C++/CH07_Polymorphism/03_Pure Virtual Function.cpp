#include <iostream>

using namespace std;
//가상 클래스의 소멸자
//상속관계가 있으면서 동시에 메모리 해제를 해야하는 경우
//반드시 부모 클래스의 소멸자를 가상함수로 해야함
//부모포인터로 객체를 삭제하면 부모 클래스의 소멸자가 호출되기 때문
// if 다형성을 이용할때 소멸자를 가상함수로 하지 않으면
// 자식 클래스의 소멸자는 호출되지 않고 부모클래스만 호출되기때문에 자식클래스의 객체는 여전히 정상적으로 해제X
//가상함수는 재정의 X 하지만 순수 가상함수는 반드시 자식클래스에서 재정의 해야함
// 부모 클래스에서 함수동작의 본체를 정의X 자식클래스에서 정의 O 
class A {
public:
	// 순수 가상함수 정의
	virtual void show()=0 { cout << "A클래스입니다." << endl; }
};
class B : public A {
public:
	virtual void show() {
		cout << "B 클래스입니다." << endl;
	}
	// virtual void show() { cout << "B클래스입니다." << endl; }
	// show() 함수를 재정의하지 않으면 B클래스의 객체를 사용 불가능
};

int main(void) {
	A* p;
	B b;
	p = &b; p->show();
	system("pause");
}
//추상 클래스
//하나 이상의 순수 가상함수를 포함하는 클래스
//자식클래스는 추상 클래스를 상속 받은 이후에 반드시
//순수 가상함수를 모두 오버라이딩 해야 객체 사용 가능