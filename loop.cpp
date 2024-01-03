#include <iostream>

int main() {
    int i, sum = 0;

    for(i=0; i<10; i++){
        std::cout << i << std::endl;
        sum+=i;
    }
    

    std::cout << "гую╨:" << sum << std::endl;

    return 0;
}