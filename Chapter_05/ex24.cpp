#include <iostream>

using namespace std;

inline float square(float x) { return x * x; };

void printValues(int x, int y = 10);




int main() {
	//�ζ��� �Լ�
	/*
	�Ϲ������� �Լ��� ȣ���� �Լ��� �ּҷ� �����ϴ� ����
	�ζ��� �Լ��� �����ϵ� �Լ� �ڵ尡 ���α׷��� �ٸ� �ڵ忡 ����
	�����Ϸ��� �ζ��� �Լ� ȣ�� = ������ �ƴ� �׿� �����ϴ� �Լ� �ڵ�� ��ü
	*/
	int a = 5;
	cout << "�� ���� ���̰� " << endl;
	float b = square(a);
	cout << b << endl;


	/*
	����Ʈ �Ű������� �⺻���� ������ �Լ� �Ű� ������.
	����ڰ� �� �Ű� ������ ���� �������� ������ �⺻��(default value)�� ���ȴ�.
	�ݴ�� �Ű� ������ ���� �����ϸ� ����� ���� ���� �⺻�� ��� ���ȴ�.
	*/
	printValues(1);
	printValues(3, 4);
}

void printValues(int x, int y = 10) {
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}

