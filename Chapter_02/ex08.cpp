#include <iostream>

using namespace std;

int main() {
    //����ü   : �ٸ� ���������� ���Ǵ� �������� ����
    //cf) �迭 : ���� ���������� ����

    /*
    �౸������ ���� �����͸� ����� �ʹٸ�
    string name;
    string position;
    int height;
    int weight;
    �� �ܿ��� ���� �ٸ� ���������� ������ �ʿ��ϴ�. �̷� �� �ʿ��� ���� ����ü
    */
    struct MyStruct
    {
        string name;
        string position;
        int height;
        int weight;
    } B;

    /*
    A.name = "Son";
    A.name = "Striker";
    A.height = 183;
    A.weight = 77;
    */

    MyStruct A = {          //����ü �ȿ� ���� �������� �ִ�.
         "Son",
         "Striker",
          183,
          77
    };
    
    cout << A.name << endl;
    cout << A.position << endl;
    cout << A.height << endl;
    cout << A.weight << endl;

    B = {
        // �ƹ����� ���� �ʴ´ٸ� 0���� ��
    };

    MyStruct C[2] = {           //�迭�ε� ��밡��
        {"A","A", 1, 1},
        {"B","B", 2, 2}
    };

    cout << C[0].name << endl;
    cout << C[0].position << endl;
    cout << C[0].height << endl;
    cout << C[0].weight << endl;

    return 0;
}