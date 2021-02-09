#include <iostream>
#include "../include/GameManager.h"
#include "../include/HP.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    srand(time_t(NULL));
    GameManager gm;
    gm.startGame();

    return 0;
}




