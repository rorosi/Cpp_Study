#include <iostream>

using namespace std;

int main()
{
	//�� ǥ����
	//����, ����, ������ ������

	//���� ||
	/*
	5 == 5 || 5 == 9	true
	5 > 3 || 5 > 10		true
	5 > 8 || 5 < 10		true
	5 > 9 || 5 < 2		false
	*/

	//���� &&
	/*
	5 == 5 && 9 == 9	true
	5 == 5 && 9 != 9	false
	10 < 2 && 10 > 2	false
	*/

	//������ !
	// !(ǥ����) true�� false, false�� true�� ��ȯ

	cout << "����� ���̸� �Է��ϼ���.";
	int age;
	cin >> age;

	if (age < 0 || age > 100) {
		cout << "������ �Ͻø� �ȵ˴ϴ�!\n";
	}
	else if (20 <= age && age <= 29) {
		cout << "����� 20�� �̱���?\n";
	}
	else {
		cout << "����� ���̸� �� �𸣰ڽ��ϴ�.";
	}

	return 0;
}