#include <iostream>

using namespace std;

int main()
{
	//�迭 ��� �ݺ���
	int a[10] = { 1, 3, 5, 7, 9 };

	for (int i = 0; i < 5; i++) {
		cout << a[i];
	}
	cout << "\n";

	for (int i : a) {		//������� �迭���� ���� i�� ��
		cout << i;
	}
	cout << "\n";

	//��ø ���� : 2���� �迭
	int temp[4][5] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,22,33,44,55},
		{111,222,333,444,555},
	};
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << temp[row][col] << " ";
		}
		cout << "\n";
	}
	return 0;
}