#include <iostream>

using namespace std;

int sum(int, int);
float sun(float, float);

int main() {
	//�Լ��� ����
	//���� : �پ��� ���¸� ����
	//�Լ��� �����ε�
	//���� ���� �Լ��� ���� �̸����� �����Ѵ�.

	cout << "�� ������ �Է��Ͻʽÿ�. \n";
	int a, b;
	cin >> a >> b;
	cout << "�� ������ ���� " << sum(a, b) << "�Դϴ�.\n";
	cout << "�� �Ǽ��� �Է��Ͻʽÿ�. \n";
	float c, d;
	cin >> c >> d;
	cout << "�� �Ǽ��� ���� " << sum(c, d) << "�Դϴ�.\n";

	/*
	����� �� ���� ���
	1. �Լ��� �������� �ٸ� ���
    2. �Լ��� ����� ��, �� �� �̻��� �Լ��� �����Ǵ� ���
	*/
	return 0;

}

int sum(int a, int b) {
	return a + b;
}

float sun(float a, float b) {
	return a + b;
}

