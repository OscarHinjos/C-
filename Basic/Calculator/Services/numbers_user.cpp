#include <iostream>
#include <limits>

float choose_number() {
    float number = 0;
    bool valid_input = false;
    
    while (!valid_input) {
        std::cout << "Please write another number " << std::endl;
        if (std::cin >> number) {
            valid_input = true;
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please try again." << std::endl;
        }
    }
    
    return number;
}