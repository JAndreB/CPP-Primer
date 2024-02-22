#include <iostream>
int main ()
{
    int sum = 50, val = 1;
    //Keep executing while as long as val is lower than or equal to 100
    while (val <= 100) {
        sum += val;
        val ++;
    }
    std::cout << "The sum of 50 to 100 inclusive is " << sum << "." << std::endl;
    return 0;
}