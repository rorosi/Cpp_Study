#include <iostream>

using namespace std;

const float PIE = 3.14;
void cheers(int n);
float circle(int x);

int main()
{
	/*
	�Լ� ����
	1. ���ϰ��� �ִ� Ÿ��
	typeName functionNmae(parameterList)
	{
		statement(s);
		return value;	// �Լ� �ڷ��� Ÿ�԰� ���� Ÿ���� ���ƾ� ��
	}
	2. ���ϰ��� ���� Ÿ��
	void functionNmae(parameterList)
	{
		statement(s);
		return;   // ������ �� ����
	}
	*/

	int a;
	cout << "�ϳ��� ���� �Է��Ͻʽÿ�." << endl;
	cin >> a;
	cheers(a);

	int b;
	cout << "���� ������ ���̸� �Է��Ͻʽÿ�." << endl;
	cin >> b;
	float c = circle(b);
	cout << "���� ���̴� " << c << " �Դϴ�." << endl;
}

void cheers(int n) {
	for (int i = 0; i < n; i++) {
		cout << "Cheers!" << endl;
 	}
}

float circle(int x) {
	return x * x * PIE;
}