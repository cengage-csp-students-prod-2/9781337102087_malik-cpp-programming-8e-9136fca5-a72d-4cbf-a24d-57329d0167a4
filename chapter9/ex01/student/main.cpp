#include <iostream>
#include <string>
#include <iomanip>
#include <limits> // Required for numeric_limits in robust input handling

/**
 * @brief Defines the structure for storing data about a computer.
 * * Includes fields for text data (manufacturer, model, processor),
 * integer data (RAM, hard drive size, year built), and floating-point data (price).
 */
struct computerType {
    std::string manufacturer;
    std::string model;
    std::string processor;
    int ram;             // in GB
    int hardDriveSize;   // in GB
    int yearBuilt;
    double price;
};

/**
 * @brief Clears the input buffer to prevent issues when mixing cin and getline.
 */
void clearInputBuffer() {
    // Ignore characters up to the next newline or EOF
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

/**
 * @brief Main function to prompt for computer data and display the results.
 */
int main() {
    // 1. Declare a variable of type computerType
    computerType myComputer;

    // Set output formatting for price
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    
    std::cout << "--- Computer Data Input ---\n";

    // 2. Prompt for and input string data (Manufacturer, Model, Processor)
    // Use std::getline to correctly handle inputs that may contain spaces (like "Intel GFX")

    std::cout << "Enter the name of the manufacturer: ";
    std::getline(std::cin, myComputer.manufacturer);

    std::cout << "Enter the model of the computer: ";
    std::getline(std::cin, myComputer.model);

    std::cout << "Enter processor type: ";
    std::getline(std::cin, myComputer.processor);
    
    // 3. Prompt for and input numeric data (RAM, Hard Drive Size, Year Built, Price)
    // Using standard cin for these will work cleanly since no further getline follows them.

    std::cout << "Enter the size of RAM (in GB): ";
    std::cin >> myComputer.ram;

    std::cout << "Enter the size of hard drive (in GB): ";
    std::cin >> myComputer.hardDriveSize;

    std::cout << "Enter the year the computer was built: ";
    std::cin >> myComputer.yearBuilt;

    std::cout << "Enter the price: ";
    std::cin >> myComputer.price;

    // 4. Output the stored computer data
    std::cout << "\n--- Computer Data Output ---\n";
    std::cout << "Manufacturer: " << myComputer.manufacturer << "\n";
    std::cout << "Model: " << myComputer.model << "\n";
    std::cout << "Processor: " << myComputer.processor << "\n";
    std::cout << "Ram: " << myComputer.ram << "\n";
    std::cout << "Hard Drive Size: " << myComputer.hardDriveSize << "\n";
    std::cout << "Year Built: " << myComputer.yearBuilt << "\n";
    // The price is formatted to two decimal places and prefixed with '$'
    std::cout << "Price: $" << myComputer.price << "\n";

    return 0;
}