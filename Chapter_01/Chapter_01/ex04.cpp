#include <iostream>

using namespace std;

int main() {
	//���� ���̸� ���ϴ� ���α׷�
	//������ * ������ * ����
	
	const float PIE = 3.1415926535; // �ʱ�ȭ�� ���� ���� �ٲ� �� ����

	int r = 3;
	float s = r * r * PIE;
	//1. �ٲ� �ʿ䰡 ���¼�
	//2. �ٲ��� �ȵǴ� ��
	//���

	int r2 = 3;
	float s2 = r2 * r2 * 3.14;

	cout << s << endl;

	//�������� ��ȯ
	/*
	1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
	2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	3. �Լ��� �Ű������� ������ ��
	*/
	
	int a = 3.141592;
	cout << a << endl;

	//���������� �������� ��ȯ
	//typeName(a) (typeName)a ���·� ��ȯ
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;

	//C++
	//static_cast<typeName> 
	cout << static_cast<int>(ch) <<  endl;

	return 0;
}