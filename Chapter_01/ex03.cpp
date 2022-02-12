#include <iostream>

using namespace std;

int main() {
	//char : 작은 문자형
	char b = 'a';
	// null 문자 '\0'를 만나야 문자열이 끝난 지 확인
	// "" 에러가 생기는 이유 >> 명시적으로 null문자가 포함 >> string
	cout << b << endl;

	//bool : 0(false) 혹은 1(true)

	bool c = 0;
	bool d = 1;
	bool e = 10;

	cout << c << " " << d << " " << e << endl;

	return 0;
}