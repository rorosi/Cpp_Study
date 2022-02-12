#include <iostream> 

using namespace std;


int main() {
	/*
	+ : 두 개의 피연산자의 합을 계산합니다.
	- : 첫 번째 피연산자에서 두 번째 피연산자의 차를 계산합니다.
	* : 두 개의 피연산자의 곲을 계산합니다.
	/ : 첫 번째 피연산자에서 두 번째 피연산자를 나눕니다.
	>> : 두 개의 피연산자가 모두 정수이면 결과값은 '몫' 입니다.
	% : 첫 번째 피연산를 두 번째 피연산자로 나누어 나머지를 구합니다.
	부동 소수점(실수) 사용할 수 없습니다.
	*/

	int a = 10;
	int b = 3;

	int c = a + b;
	int d = a - b;
	int e = a * b;
	int f = a / b;
	int g = a % b;
	
	cout << "c : " << c << endl;
	cout << "d : " << d << endl;
	cout << "e : " << e << endl;
	cout << "f : " << f << endl;
	cout << "g : " << g << endl;

	//C++가 복잡한 산술 연산을 수행할 수 있을까? > 있다.
	float x = 9.0;
	int y = 5;

	cout << x / y << endl;


	//auto 
	//복잡한 자료형을 다룰 때 사용
	auto n = 100;		// n은 int
	auto m = 1.5;		// m은 float
	auto k = 1.3e12L;	// k는 long long

	return 0;
}