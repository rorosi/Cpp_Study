#include <iostream>

using namespace std;

int main()
{
	//반복문이란?
	for (int i = 0; i < 5; i++) {
		cout << i << "번째입니다." << endl;
	}
	/*
	1. 반복문에 사용할 카운터의 값을 초기화
	2. 반복문을 진행할 것인지 '조건 검사'
	3. 반복문 몸체를 수행합니다.
	4. 카운터의 값을 변화합니다.
	*/

	//증가 연산자, 감소 연산자
	int a = 10;
	int b = 10;

	cout << "a는 " << a << ", b는 " << b << endl;
	cout << "a++는 " << a++  << endl;
	cout << "++b는 " << ++b  << endl;
	cout << "a는 " << a << ", b는 " << b << endl;
	//감소도 같은 원리

	/*
	<  : 작다
	<= : 작거나 같다
	>  : 크다
	>= : 크거나 같다
	== : 같다
	!= : 같지 않다.
	*/
	return 0;
}