#include <iostream>

int main() {
    int a = 3;
    int& another_a = a; //a�� ������ another_a
    //�����ڸ� ���ϴ� ����� ����Ű���� �ϴ� Ÿ�� �ڿ� &�� ���δ�.
    //another_a�� ��� �۾��� �����ϵ� �̴� ��ǻ� a�� �۾��� �ϴ� ��

    another_a = 5;
    std::cout<<"a: "<<a<<std::endl;
    std::cout<<"another_a: "<<another_a<<std::endl;

    return 0;
}