#include <iostream>

using namespace std;

int main()
{
	//while문, do while문
	
	for (int i = 0; i < 3; i++) {
		// 여기서 사용되는 int i 는 지역변수기 떄문에
		// for문 밖으로 나가면 사라짐
		cout << "for문 입니다.\n";
	}

	//cout << i << endl;  에러 발생

	int j = 0;		// int j는 전역변수이기 떄문에 while문을 나가도 사라지지 않음
	while (j < 3) {	// "" 1 혹은 true 값을 넣으면 무한반복
		cout << "while문 입니다.\n";
		j++;
	}

	bool k = false;
	do {			// 반복을 1회 우선 실행하고 조건을 검사
		cout << "while문 입니다.\n";
	} while (k);
	

	return 0;
}