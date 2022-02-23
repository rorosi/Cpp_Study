#include <iostream>
#include "time2.h"

using namespace std;

int main() {
	//C++ friend
	//이항 연산자 : 두 개의 피연산자를 요구하는 연산자
	//operator*
	Time t1(1, 20);
	Time t2;

	t2 = 3 * t1;
	//t2 = operator*(3, t1);
	t2.show();

	return 0;
}