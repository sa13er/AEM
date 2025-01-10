#include <stdio.h>
#include <math.h> // For pow()

int main() {
    // Define the values
    int a = 10, b = 9, c = 12, d = 8; // Replace these as needed
    
    // Define the powers of the base (16)
    double result = a * pow(16, -2) + b * pow(16, -3) + c * pow(16, -4) + d * pow(16, -5);

    // Output the result
    printf("\nThe result of the calculation is: %.10f\n", result);

    return 0;
}
