#include "struct.h"
#include "new.h"
//���  ������ ���� ���Ͽ� ���Խ�ų ����,
//�ݵ�� �� �� ���� ���Խ��Ѿ� �Ѵ�.

/*
header
1. �Լ� ����
2. #define�̳� const�� ����ϴ� ��ȣ ���
3. ����ü ����
4. Ŭ���� ����
5. ���ø� ����
6. �ζ��� �Լ�
*/

int main() {
	MyStruct PandaCoding = {
		"Panda",
		26,
	};

	display(PandaCoding);
	return 0;
}

