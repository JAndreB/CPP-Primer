#include <iostream>
int main()
{
    int sum = 1000;
    while (sum > 0) {
        
        std::cout << "The number is:" << sum-- << std::endl;
    }
    
    return 0;
}