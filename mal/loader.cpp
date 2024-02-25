#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    const long long SIZE = 3 * 1024LL * 1024LL * 1024LL; 
    const long long STRING_SIZE = 1000000; 
    const long long NUM_STRINGS = SIZE / STRING_SIZE; 

    std::string* strArray = static_cast<std::string*>(malloc(NUM_STRINGS * sizeof(std::string))); // Allocate memory
    if (strArray == nullptr) {
        std::cerr << "Memory allocation failed." << std::endl;
        return 1;
    }

    // Fill the allocated memory with strings incrementally
    for (long long i = 0; i < NUM_STRINGS; ++i) {
        std::string str(STRING_SIZE, 'A'); // Create a string of specified size
        strArray[i] = str; // Assign the string to the array element
    }

    std::cout << "Memory allocated. Press Enter to exit.";
    std::cin.get();

    free(strArray); // Free allocated memory

    return 0;
}