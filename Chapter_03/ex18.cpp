#include <iostream>

using namespace std;

const int SIZE = 30;
int main()
{
	/*
	int a;
	cin >> a;
	switch (a)
	{
	case  1:
		cout << "�Է��Ͻ� ���� 1�Դϴ�.\n";
		break;
	case  2:
		cout << "�Է��Ͻ� ���� 2�Դϴ�.\n";
		break;
	case  3:
		cout << "�Է��Ͻ� ���� 3�Դϴ�.\n";
		break;
	default:
		cout << "�Է��Ͻ� ���� 1,2,3 �̿ܿ� �ٸ� ���Դϴ�.\n";
		break;
	}

	cout << "switch ������ �������ϴ�.\n";
	*/

	int i = 0;
	while (true)
	{
		cout << "i�� ���� " << i << " �Դϴ�." << endl;
		if (i > 10)
			break;
		i++;
	}
	cout << "while ������ �������ϴ�.\n";

	cout << "������ �Է��Ͻʽÿ�.\n";
	char line[SIZE];
	cin.get(line, SIZE);
	cout << "�Է��Ͻ� ������\n";
	int spaces = 0;
	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i];

		if (line[i] == ' ')		// ������ ������ 
			continue;			// �ٽ� for ������

		spaces++;
	}
	cout << "�Դϴ�.\n";
	cout << "�Է��Ͻ� ���忡�� ������ ������ ���� ���� " << spaces << "�� �Դϴ�.\n";
	cout << "for���� �������ϴ�.\n";
	return 0;
}