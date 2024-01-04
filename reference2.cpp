#include <iostream>

int main() {
    int a = 3;
    int& another_a = a; //a의 참조자 another_a
    //참조자를 정하는 방법은 가리키고자 하는 타입 뒤에 &을 붙인다.
    //another_a에 어떠한 작업을 수행하든 이는 사실상 a에 작업을 하는 것

    another_a = 5;
    std::cout<<"a: "<<a<<std::endl;
    std::cout<<"another_a: "<<another_a<<std::endl;

    return 0;
}