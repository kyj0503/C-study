#include <iostream>

int changeVal(int *p) {
    *p = 3;

    return 0;
}

int main() {
    int number = 5;

    std::cout<<number<<std::endl;
    changeVal(&number);
    std::cout<<number<<std::endl;

    return 0;
}