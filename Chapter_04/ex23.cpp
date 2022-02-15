#include <iostream>

using namespace std;

void countDown(int n);
int func(int);

int main()
{
	//재귀호출 : C++에서 함수는 자기 자신을 호출할 수 있다.
	//재귀함수를 사용할 때는 항상 이 함수를 멈추게 할 지점을 넣어주어야 한다.
	countDown(5);

	//함수를 지시하는 포인터
	//어떠한 함수에 함수의 주소를 매개변구로 넘겨주는 경우 유용하게 사용할 수 있다.
	/*
	1. 함수의 주소를 얻는다.
	2. 함수를 지시하는 포인터를 선언한다.
	3. 함수를 지시하는 포인터를 사용하여 그 함수를 호출한다.
	*/
	cout << func << endl;

	int (*pf)(int);
	pf = func;
	
	cout << (*pf)(3) << endl;
	return 0;
}

void countDown(int n) {
	cout << "Counting..." << n << endl;
	if (n > 0)							
		countDown(n - 1);
	cout << n << "번째 재귀함수" << endl;
}
int func(int n) {
	return n + 1;
}
