#include <stdio.h>
#include <math.h> // For pow()

int main() {
    // Define the values
    int a = 1, b = 1, c = 1, d = 1; // Replace these as needed
    
    // Define the powers of the base (16)
    double result = a * pow(2, 1) + b * pow(2, 2) + c * pow(2, 3) + d * pow(2, 4);

    // Output the result
    printf("\nThe result of the calculation is: %.10f\n", result);

    return 0;
}
