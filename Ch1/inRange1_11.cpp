#include <iostream>
int main()
{
    std::cout << "Enter 2 numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    while (v1 <= v2) {
        std::cout << v1++ << std::endl;
    }

    return 0;
}

/* Errors: generated cin wrong, used comma instead of doub
le arrows for v2*/