#include <iostream>

int main() {
    int fav_num;
    std::cout << "Enter your favourite number between 1 to 100:";
    std::cin >> fav_num;

    std::cout << "Amazing, that's my favourite number too!" << std::endl;

    return 0;
}

// `g++ -Wall -std=c++14 .\helloWorld.cpp` to compile