#include <iostream>

float calculateSquare(float number) {
    float sf = number * number;  // Calculate the square of the number
    return sf;                   // Return the square value
}

int main() {
    float num = 5.0;
    float square = calculateSquare(num);
    std::cout << "Square of " << num << " is " << square << std::endl;
    return 0;
}
