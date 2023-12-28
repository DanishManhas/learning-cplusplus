#include <iostream>

int main() {
    char myChar = 'A';
    
    // Using a pointer
    char* charPtr = &myChar;
    char dereferencedValue = *charPtr;

    // Using a reference
    char& charRef = myChar;

    // Printing values
    std::cout << "Original Value: " << myChar << std::endl;
    std::cout << "Dereferenced Value: " << dereferencedValue << std::endl;
    std::cout << "Reference Value: " << charRef << std::endl;

    return 0;
}
