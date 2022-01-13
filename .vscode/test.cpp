#include <iostream>
#include <string>

using namespace std;

class A {
public:
    virtual void show()=0;
};

class B : public A{
    virtual void show () { cout<< "B class";}
};

int main() {
    A* p;
    B b;
    p = &b; p->show(); //포인터 타입을 기준으로 함수를 호출하기 때문에 calss A의 함수를 불러옴
    //이 문제를 해결하기 위해 가상함수 존재
    //자식 클래스에서 함수를 재정의 할 수 있음 동적 바인딩을 통해 컴파일 시간에 객체를 특정할 수 있다.
    return 0;
}