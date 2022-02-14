#include <iostream>

using namespace std;

int main()
{
	//분기 구문 : if 구문
	if (true) {				// 코드가 1줄이면 {}이 필요하지 않음
		cout << "조건이";
		cout << "참입니다." << endl;
	}
	else {
		cout << "조건이";
		cout << "거짓입니다" << endl;
	}

	if (false) {				
		cout << "#1";
	}
	else {
		if (true) {
			cout << "#2";
		}
		else {
			cout << "#3";
		}
	}

	if (false) {
		cout << "#1";
	}
	else if (true) {
		cout << "#2";
	}
	else {
		cout << "#3";
	}

	cout << "프로그램이 종료되었습니다";

	return 0;
}