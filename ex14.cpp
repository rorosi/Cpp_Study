#include <iostream>

using namespace std;

int main()
{
	//while��, do while��
	
	for (int i = 0; i < 3; i++) {
		// ���⼭ ���Ǵ� int i �� ���������� ������
		// for�� ������ ������ �����
		cout << "for�� �Դϴ�.\n";
	}

	//cout << i << endl;  ���� �߻�

	int j = 0;		// int j�� ���������̱� ������ while���� ������ ������� ����
	while (j < 3) {	// "" 1 Ȥ�� true ���� ������ ���ѹݺ�
		cout << "while�� �Դϴ�.\n";
		j++;
	}

	bool k = false;
	do {			// �ݺ��� 1ȸ �켱 �����ϰ� ������ �˻�
		cout << "while�� �Դϴ�.\n";
	} while (k);
	

	return 0;
}