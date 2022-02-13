#include <iostream>

using namespace std;

int main() {
    //구조체   : 다른 데이터형이 허용되는 데이터의 집합
    //cf) 배열 : 같은 데이터형의 집합

    /*
    축구선수에 관한 데이터를 만들고 싶다면
    string name;
    string position;
    int height;
    int weight;
    이 외에도 많은 다른 데이터형의 정보가 필요하다. 이럴 때 필요한 것이 구조체
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

    MyStruct A = {          //구조체 안에 값을 넣을수도 있다.
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
        // 아무값도 넣지 않는다면 0값이 들어감
    };

    MyStruct C[2] = {           //배열로도 사용가능
        {"A","A", 1, 1},
        {"B","B", 2, 2}
    };

    cout << C[0].name << endl;
    cout << C[0].position << endl;
    cout << C[0].height << endl;
    cout << C[0].weight << endl;

    return 0;
}