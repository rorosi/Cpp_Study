#include <iostream>

using namespace std;

const int SIZE = 8;

//int sumArr(int[], int);	// == int sumArr(int*, int);
int sumArr(int*, int*);

int main()
{
	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	//cout << "size of arr " << sizeof arr << endl;
	// arr == &arr[0]
	//int sum = sumArr(arr, SIZE);
	//cout << "�Լ��� �� ���� " << sum << " �Դϴ�.";
	int sum = sumArr(arr, arr + SIZE);
	cout << "�Լ���" << SIZE << "������ ���� " << sum << " �Դϴ�.\n";

	sum = sumArr(arr, arr + 3);
	cout << "�Լ���" << "����° �ε��� ������ ���� " << sum << " �Դϴ�.";
	return 0;
}

int sumArr(int* begin, int* end) {
	
	int total = 0;
	int* pt;

	for (pt = begin; pt != end; pt++)
		total += *pt;
	
	return total;
}

/*
int sumArr(int arr[], int n) { //==  int sumArr(int* arr, int n) {
	cout << "size of arr " << sizeof arr << endl;
	int total = 0;

	for (int i = 0; i < n; i++)
		total += arr[i];
	
	return total;
}
*/
