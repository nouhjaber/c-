#include <iostream>



int main() {
    // Loop through numbers 1 to 10
    for (int i = 1; i <= 10; ++i) {
        std::cout << "Processing number: " << i << "\n";
        
        // Using switch to check if the number is even or odd
        switch (i % 2) {  // 0 for even, 1 for odd
            case 0:  // Even number
                std::cout << "Skipping even number: " << i << "\n";
                continue;  // Skip the rest of the loop and move to the next iteration
            case 1:  // Odd number
                std::cout << "Processing odd number: " << i << "\n";
                break;  // Continue with the next iteration
            default:
                std::cout << "Unknown condition.\n";
        }

        // This line will be skipped for even numbers because of the continue
        std::cout << "Finished processing number: " << i << "\n\n";
    }

    return 0;
}
