#include <iostream> 

using namespace std;


int main() {
	/*
	+ : �� ���� �ǿ������� ���� ����մϴ�.
	- : ù ��° �ǿ����ڿ��� �� ��° �ǿ������� ���� ����մϴ�.
	* : �� ���� �ǿ������� ���� ����մϴ�.
	/ : ù ��° �ǿ����ڿ��� �� ��° �ǿ����ڸ� �����ϴ�.
	>> : �� ���� �ǿ����ڰ� ��� �����̸� ������� '��' �Դϴ�.
	% : ù ��° �ǿ��긦 �� ��° �ǿ����ڷ� ������ �������� ���մϴ�.
	�ε� �Ҽ���(�Ǽ�) ����� �� �����ϴ�.
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

	//C++�� ������ ��� ������ ������ �� ������? > �ִ�.
	float x = 9.0;
	int y = 5;

	cout << x / y << endl;


	//auto 
	//������ �ڷ����� �ٷ� �� ���
	auto n = 100;		// n�� int
	auto m = 1.5;		// m�� float
	auto k = 1.3e12L;	// k�� long long

	return 0;
}