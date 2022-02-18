#include <iostream>

using namespace std;

inline float square(float x) { return x * x; };

void printValues(int x, int y = 10);




int main() {
	//인라인 함수
	/*
	일반적으로 함수의 호출은 함수의 주소로 점프하는 과정
	인라인 함수는 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입
	컴파일러의 인라인 함수 호출 = 점프가 아닌 그에 대응하는 함수 코드로 대체
	*/
	int a = 5;
	cout << "한 변의 길이가 " << endl;
	float b = square(a);
	cout << b << endl;


	/*
	디폴트 매개변수는 기본값이 제공된 함수 매개 변수다.
	사용자가 이 매개 변수의 값을 제공하지 않으면 기본값(default value)이 사용된다.
	반대로 매개 변수의 값을 제공하면 사용자 제공 값이 기본값 대신 사용된다.
	*/
	printValues(1);
	printValues(3, 4);
}

void printValues(int x, int y = 10) {
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}

