#include <iostream>

using namespace std;

int main()
{
	//�б� ���� : if ����
	if (true) {				// �ڵ尡 1���̸� {}�� �ʿ����� ����
		cout << "������";
		cout << "���Դϴ�." << endl;
	}
	else {
		cout << "������";
		cout << "�����Դϴ�" << endl;
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

	cout << "���α׷��� ����Ǿ����ϴ�";

	return 0;
}